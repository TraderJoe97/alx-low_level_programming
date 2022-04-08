#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success/correct)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > i)
			{
				for (k = 48; k <= 57; k++)
				{
					if (k > j)
					{
						putchar(i);
						putchar(j);
						putchar(k);

					if ((i != 55) || (j != 56) || (k != 57))
					{
						putchar(',');
						putchar(' ');
					}

					}
					else
						continue;
				}
			}
			else
				continue;
		}
	}
	putchar('\n');
	return (0);
}
