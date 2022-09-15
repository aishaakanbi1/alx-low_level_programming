#include <stdio.h>

/**
 * main - counts from 1 to 100
 * Description: counts from 1 to 100, printing
 * Fizz for numbers that are multiples of 3,
 * Buzz for numbers that are multiples 5,
 * and FizzBuzz for numbers that are
 * multiples of both 3 and 5
 * Return: void
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", number);

		if (number != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
