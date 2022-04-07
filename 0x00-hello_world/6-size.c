#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	fprintf(stdout, "size of a char: %d byte(s)\n", sizeof(char));
	fprintf(stdout, "size of an int: %d byte(s)\n", sizeof(int));
	fprintf(stdout, "size of a long int: %d byte(s)\n", sizeof(long int));
	fprintf(stdout, "size of a long long int: %d byte(s)\n", sizeof(long long int));
	fprintf(stdout, "size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
