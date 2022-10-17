#include <stdio.h>

/**
 * main - prints the lower_case of an alphabet in reverse
 *
 * Return: Always 0 successfully
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'z'; lower_case >= 'a'; lower_case++)
		putchar(lower_case);

	putchar('\n');

	return (0);
}
