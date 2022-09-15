#include "main.h"

/**
 * more_numbers - prints 0-14 (in ASCII) 10 times
 * Description: prints 0-14 (in ASCII) 10 times
 */
void more_numbers(void)
{
	int loopcount, printnumber;
	int tens, unit;

	for (loopcount = 0; loopcount < 10; loopcount++)
	{
		for (printnumber = 0; printnumber <= 14; printnumber++)
		{
			tens = printnumber / 10;
			unit = printnumber % 10;
			if (tens)
				_putchar(tens + '0');
			_putchar(unit + '0');
		}
		_putchar('\n');
	}

}
