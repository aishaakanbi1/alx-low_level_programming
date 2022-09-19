#include "main.h"

/**
 * _puts - prints string to standard output
 * @str: string to be printed
 * Description: prints string to standard output
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
