#include <stdio.h>

/**
 * main - prints all single digit number of base 10 from 0
 *
 * Return: Always 0 successfully
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	printf('\n');

	return (0);
}
