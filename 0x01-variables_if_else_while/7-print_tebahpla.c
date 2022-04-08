#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success/correct)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
