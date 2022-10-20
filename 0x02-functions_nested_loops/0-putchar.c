#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pr = "_putchar";

	while (pr)
	{
		_putchar(pr);
		pr++;
	}
	_putchar('\n');

	return (0);
}
