/**
 * rand - generate 6 specific numbers for the Giga Millions program.
 *
 * Return: an int.
 */
int rand(void)
{
	static int i;
	int wining_numbers[] = {74, 24, 10, 1, 7, 9};

	++i;
	return (wining_numbers[i - 1]);
}
