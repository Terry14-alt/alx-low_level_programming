#include "main.h"

/**
 * main - a function that prints the alphabet in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
