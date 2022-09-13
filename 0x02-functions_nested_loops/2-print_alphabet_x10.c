#include "main.h"
/**
*print_alphabet_x10 - prints a - z 10 times
 *Description: prints a - z 10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
int i;
int alphabet;
         
for (i = 0; i < 10; i++)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
