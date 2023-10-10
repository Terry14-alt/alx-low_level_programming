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

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int is %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long is %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long is %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float is %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
