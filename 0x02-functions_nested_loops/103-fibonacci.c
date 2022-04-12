#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	long fib = 0;
	long sum =0;

	while (fib <= 4000000)
	{
		fib = j + i;
		if ((fib % 2) == 0)
		{
			sum += fib;
		}
		i = j;
		j = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
