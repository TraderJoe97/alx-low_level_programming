#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success/correct)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar('\n');
	return (0);
}
