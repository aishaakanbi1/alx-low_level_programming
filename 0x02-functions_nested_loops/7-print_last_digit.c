#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - prints the last digit of a fn
 *@n: number to get the last digit of
 *Description: prints the last digit of a fn (number is in ascii form)
 *Return: the last didgit
 */
int print_last_digit(int n)
{
        int last_digit = abs(n % 10);

         _putchar(last_digit + 0);
         return (last_digit);
}
