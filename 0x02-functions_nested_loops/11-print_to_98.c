#include <stdio.h>

/**
 *print_to_98 -  prints all natural numbers from n to 98.
 *@n: number to start counting from
 *Description:  prints all natural numbers from n to 98.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n >= 98)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d", n);
n--;
}
}
else if (n < 98)
{
while (n <= 98)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d", n);
n++;
}
}
putchar(n);
}
