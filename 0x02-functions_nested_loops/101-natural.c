#include <stdio.h>
/**
 *main -program execution starts here
 *Description: prints all the multiples of 3 and 5 and the sums it.
 *Return: 1 or 0 to signify success or failuer
 */
int main(void)
{
int counter, sum;

sum = 0;
for (counter = 1; counter < 1024; counter++)
{
if (counter % 3 == 0 || counter % 5 == 0)
{
sum += counter;
}
}
printf("%d\n", sum);

return (0);
}
