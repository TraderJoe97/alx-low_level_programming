#include "stdio.h"

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	int i = 0;
	__uintmax_t a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
