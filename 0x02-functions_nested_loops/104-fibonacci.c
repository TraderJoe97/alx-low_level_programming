#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	unsigned long i = 0;
	unsigned long j = 1;
	int n = 0;
	unsigned long fib;

	while (n < 99)
	{
		fib = j + i;
		if (n != 98)
			printf("%lu, ", fib);
		else
			printf("%lu\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
