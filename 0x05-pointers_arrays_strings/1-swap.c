#include "main.h"

/**
 * swap_int - swap the values of two pointers
 * @a: 1st pointer to swap
 * @b: 2nd pointer to swap with
 * Description: swap the value of two pointers
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
