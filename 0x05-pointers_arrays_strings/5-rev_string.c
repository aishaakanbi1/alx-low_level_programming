#include "main.h"

/**
 * rev_string - reverses a string
 * @s: sting to reverse
 * Description: reverses a string
 */
void rev_string(char *s)
{
	int letter_count, left_index, swap;

	/*get length of string*/
	for (letter_count = 0; s[letter_count] != '\0'; letter_count++)
		;
	/* swap letters from both ends till you get to the middle*/
	for (left_index = 0, letter_count--; left_index < letter_count;
			left_index++, letter_count--)
	{
		swap = s[left_index];
		s[left_index] = s[letter_count];
		s[letter_count] = swap;
	}
}
