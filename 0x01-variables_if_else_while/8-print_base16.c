#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 successfully
 */
int main(void)
{
	int num;
	char lower_case;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
		putchar(lower_case);

	putchar('\n');

	return (0);
}
