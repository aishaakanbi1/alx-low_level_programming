#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/** 
* main - program execution starts here
* Description: this is the main function
* Return: an integer to signify successor fail
*/
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive", n);
    else if (n < 0)
        printf("%d is negative", n);
    else 
        printf("%d is zero", n);
 
    printf("\n");
    return (0);
}
