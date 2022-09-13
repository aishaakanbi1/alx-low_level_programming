#include "main.h"

/**
 *times_table - print the multiplication table
 *Description: prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j;
int product, product_x, product_y;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
product_y = product % 10;
product_x = product / 10;

if (product_x == 0)
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(product_y + '0');
}
else
{
_putchar(' ');
_putchar(product_x + '0');
_putchar(product_y + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}

}



}
