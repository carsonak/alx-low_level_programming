#!/bin/bash

compile_options="-Wall -pedantic -Werror -Wextra -std=gnu89"
src_dir="/home/line/GitHub_Repositories/alx-low_level_programming"
trgt_dir="/home/line/GitHub_Repositories/alx-low_level_programming/0x09-static_libraries"
log_file="./l_f_m.log"

# Redirect stdout and stderr to the log file
exec > >(tee -a "$log_file")
exec 2>&1

# Check if the target directory exists; create it if necessary
if [[ ! -d "$trgt_dir" ]]; then
    mkdir -p "$trgt_dir"
    echo "Created target directory: $trgt_dir"
fi

# Initialize an array to store copied file names
copied_files=()

# Iterate through C source files in the source directory
while IFS= read -r -d '' src_file; do
    # Extract the file name from the full path
    file_name=$(basename "$src_file")

    # Check if the file has already been copied
    if [[ " ${copied_files[@]} " =~ " $file_name " ]]; then
        echo "Skipping duplicate file: $file_name"
        continue
    fi

    # Copy the file to the target directory
    cp "$src_file" "$trgt_dir"
    
    # Check for errors during the copy operation
    if [[ $? -eq 0 ]]; then
        echo "Copied $file_name to $trgt_dir"
        copied_files+=("$file_name")
    else
        echo "Error: Permission denied while copying '$file_name' to '$trgt_dir'."
    fi
done < <(find "$src_dir" -type f \( -name "0-isupper.c" -o -name "0-memset.c" -o -name "0-strcat.c" -o -name "1-isdigit.c" -o -name "1-memcpy.c" -o -name "1-strncat.c" -o -name "100-atoi.c" -o -name "2-strchr.c" -o -name "2-strlen.c" -o -name "2-strncpy.c" -o -name "3-islower.c" -o -name "3-puts.c" -o -name "3-strcmp.c" -o -name "3-strspn.c" -o -name "4-isalpha.c" -o -name "4-strpbrk.c" -o -name "5-strstr.c" -o -name "6-abs.c" -o -name "9-strcpy.c" -o -name "_putchar.c" \) -print0)

# Navigate to the target directory
cd "$trgt_dir"

# Compile the copied files into object files
for cpd_file in "${copied_files[@]}"; do
    object_file="${cpd_file%.*}.o"
    gcc $compile_options -c "$cpd_file"
    if [ $? -eq 0 ]; then
        echo "Compiled $cpd_file to $object_file"
    else
        echo "Error: Compilation of $cpd_file failed."
    fi
done

# Remove only the copied C source files
for cpd_file in "${copied_files[@]}"; do
    rm "$cpd_file"
    echo "Removed $cpd_file"
done
