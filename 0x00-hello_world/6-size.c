#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (char)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (int)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (long long int)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (float)sizeof(f));
	return (0);
}
