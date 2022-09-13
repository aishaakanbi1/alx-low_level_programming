#include "main.h"

/**
 *print_sign - program execution starts here
 *@n: number to be compared for sign
 *Description: this is the main function
 *Return: 1if n is positive,  -1 if n is negative, 0 if n is 0
 */
int print_sign(int n)
{
       if (n > 0)
       {
               _putchar('+');
               return (1);
        }
         else if (n < 0)
        {
             _putchar('-');
             return (-1);
         }
         else
         {
            _putchar('0');
             return (0);
             
           }

}
