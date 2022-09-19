#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 * Description: prints a string in reverse and a new line
 */
void print_rev(char *s)
{
	int letter_count;

	/*get length of string*/
	for (letter_count = 0; s[letter_count] != '\0'; letter_count++)
		;
	/* print string in reverse */
	for (letter_count--; letter_count >= 0; letter_count--)
		_putchar(s[letter_count]);
	_putchar('\n');

}
