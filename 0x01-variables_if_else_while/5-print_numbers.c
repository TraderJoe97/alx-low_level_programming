#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (correct/success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");

	return (0);
}
