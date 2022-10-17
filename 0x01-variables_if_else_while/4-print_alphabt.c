#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 *
 * Return: Always 0 successfully
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case != 'e' && lower_case != 'q')
			putchar(lower_case);
	}
	putchar('\n');

	return (0);
}
