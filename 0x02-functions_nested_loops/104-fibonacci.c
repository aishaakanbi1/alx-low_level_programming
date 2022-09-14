#include <stdio.h>



/**

 *main - program execution starts here

 *Description: this is the main function

 *Return: an integer to signify success or failure

 */

int main(void)

{

long double prevfibonacci = 1;

long double fibonacci = 2;

int counter = 3;



long double swap;



printf("%.0Lf, %.0Lf, ", prevfibonacci, fibonacci);

while (counter <= 98)

{

swap = fibonacci;

fibonacci = fibonacci + prevfibonacci;

if (counter != 98)

printf("%.0Lf, ", fibonacci);

else

printf("%.0Lf", fibonacci);

prevfibonacci = swap;

counter++;

}

putchar(n);

return (0);

}
