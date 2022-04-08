#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - creates a random number and prints wheather its positive or negative
 * Return: always zero (Success/correct)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}

	return (0);
}
