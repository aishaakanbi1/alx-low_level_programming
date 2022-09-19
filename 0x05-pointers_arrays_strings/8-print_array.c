#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: array to print
 * @n: number of array elements to print
 * Description: prints the elements of an array followed by a new line
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
	}
	putchar('\n');
}
