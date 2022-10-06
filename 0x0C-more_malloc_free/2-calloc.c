#include "main.h"

/**
 * _calloc - multiplies two digits
 * @nmemb: 1st digit in the multiplication
 * @size: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned long int all_size, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	all_size = nmemb * size;
	ptr = malloc(all_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < all_size; i++)
		ptr[i] = '\0';
	return (ptr);
}
