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
	int n = 0;
	long fib;
	long sum = 0;

	while (n < 4000000)
	{
		fib = j + i;
		if ((fib % 2) == 0)
			sum = sum+fib;
		i = j;
		j = fib;
		n += 1;
	}
	printf("%ld\n", sum);
	return (0);
}
