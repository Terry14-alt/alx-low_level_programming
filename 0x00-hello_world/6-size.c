#include <stdio.h>
/**
* main - Entry point
*
* Return: Success (0)
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(a));
	printf("the size of an int is %lu.\n", (unsigned long)sizeof(b));
	printf("The size of a long is %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long long is %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float is lu.\n", (unsigned long)sizeof(e));
	return (0);
}
