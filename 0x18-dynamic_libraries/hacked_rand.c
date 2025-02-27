/**
 * rand - generate 6 specific numbers for the Giga Millions program.
 *
 * Return: an int.
 */
int rand(void)
{
	static int i;
	/* numbers should not repeat */
	/* wining number = (rand() % 75) + 1 */
	int wining_numbers[] = {8, 8 + 75, 7, 9 + 150, 23, 74};

	++i;
	return (wining_numbers[i - 1]);
}
