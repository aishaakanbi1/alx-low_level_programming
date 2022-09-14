#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *Description: prints the first 50 Fibonacci numbers
 *Return: an integer to signify success or failure
 */
int main(void)
{
unsigned long int prevfibonacci = 1;
unsigned long int fibonacci = 2;
int counter = 3;
unsigned long int swap;

printf("%lu, %lu, ", prevfibonacci, fibonacci);
while (counter <= 50)
{
swap = fibonacci;
fibonacci = fibonacci + prevfibonacci;
if (counter != 50)
printf("%lu, ", fibonacci);
else
printf("%lu", fibonacci);
prevfibonacci = swap;
counter++;
}
putchar(n);

return (0);
}
