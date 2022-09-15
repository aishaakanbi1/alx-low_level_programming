#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: the number of lines / diagonals to print
 * Description: prints n number of diagonal lines in the terminal
 */
void print_diagonal(int n)
{
	int numofline;
	int numofspace;

	for (numofline = 1; numofline <= n; numofline++)
	{
		for (numofspace = 0; numofspace < numofline - 1; numofspace++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n < 1)
		_putchar('\n');
}
