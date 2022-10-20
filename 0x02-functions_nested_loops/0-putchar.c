#include "main.h"
/**
 * main - Prints _putchar
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