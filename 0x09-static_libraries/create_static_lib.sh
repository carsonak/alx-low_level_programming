#!/bin/bash

compile_options="-Wall -pedantic -Werror -Wextra -std=gnu89"
src_dir="./"
log_file="./l_f_m.log"

# Navigate to the target directory
cd "$trgt_dir"

# Redirect stdout and stderr to the log file
exec > >(tee -a "$log_file")
exec 2>&1

# Initialize an array to store copied file names
found_files=()

# Iterate through C source files in the source directory
while IFS= read -r -d '' src_file; do
    # Extract the file name from the full path
    file_name=$(basename "$src_file")

    # Check if the file has already been copied
    if [[ " ${found_files[@]} " =~ " $file_name " ]]; then
        echo "Skipping duplicate file: $file_name"
        continue
    fi
done < <(find "$src_dir" -type f \( -name "0-isupper.c" -o -name "0-strcat.c" -o -name "1-isdigit.c" -o -name "1-strncat.c" -o -name "2-strlen.c" -o -name " 3-islower.c" -o -name "3-strcmp.c" -o -name "4-isalpha.c" -o -name "5-strstr.c" -o -name "9-strcpy.c" -o -name "_putchar.c" -o -name "-memset.c" -o -name "100-atoi.c" -o -name "1-memcpy.c" -o -name " 2-strchr.c" -o -name "2-strncpy.c" -o -name "3-puts.c" -o -name "3-strspn.c" -o -name "4-strpbrk.c" -o -name "6-abs.c" \) -print0)

# Compile the copied files into object files
for c_file in "${found_files[@]}"; do
    object_file="${c_file%.*}.o"
    gcc $compile_options -c "$c_file"
    if [ $? -eq 0 ]; then
        echo "Compiled $c_file to $object_file"
    else
        echo "Error: Compilation of $c_file failed."
    fi
done

# Create a static Library.
ar -rc liball.a *.o

