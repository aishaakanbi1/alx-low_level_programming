#include <stdio.h>



/**

 *print_times_table - prints a multiplication table

 *@n: the end and size od the multiplication table

 *Description: prints an nxn multiplication table

 *that sitarts from 0 and stops at n

 */

void print_times_table(int n)

{



int i, j, product;



if (n == 0)

{

printf("%d\n", 0);

n = 100;

}

if (n >= 0 &&  n <= 15)

{

for (i = 0; i <= n; i++)

{

for (j = 0; j <= n; j++)

{



if (j != n)

{

product = i * j;

if (j != 0)

printf("%4d,", product);

else

printf("%d,", product);

}

else

printf("%4d", i * j);

}

putchar(n);

}

}

}
