#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>

/**
* main - program execution starts here
* Description: tis is the main function
* Return: an integer signify success or fail
*/
int main(void)
{
    int n, last_digit;
  
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes here */

    last_digit = n % 10;
 
    printf("Last digit of %d is %d", n, last_digit);

    if (last_digit > 5)
        printf(" and is greater than 5");

    if (last_digit == 0)
        printf(" and is 0");

    if (last_digit< 6 && last_digit != 0)
        printf(" and is less than 6 and not 0");

    printf("\n");
    return (0);
}
