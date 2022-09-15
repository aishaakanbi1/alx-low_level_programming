#include "main.h"
/**
 * print_numbers - prints 0-9 in ASCII form
 * Description: prints 0-9 in ASCII form
 */
void print_numbers(void)
{
	int character = '0';

	while (character <= '9')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
