#include <stdio.h>



/**

 *main - program execution starts here

 *Description: this is the main function

 *Return: an integer to signify success or failure

 */

int main(void)

{

unsigned long int prevfibonacci = 1;

unsigned long int fibonacci = 2;

unsigned long int swap;

unsigned long int sumofeven = 0;



sumofeven += 2;

while (fibonacci < 4000000)

{

swap = fibonacci;

fibonacci = fibonacci + prevfibonacci;

if (fibonacci % 2 == 0)

{

sumofeven += fibonacci;

}

prevfibonacci = swap;

}

printf("%lu\n", sumofeven);

return (0);

}
