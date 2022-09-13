#include "main.h"


/**
 *jack_bauer - prints every minute of the day
 *Description: prints every minute of the day in ascii representation
 *Return: void
 */
void jack_bauer(void)
{
int hours;
int minutes;
int hours_x;
int hours_y;
int minutes_x;
int minutes_y;

for (hours = 0; hours <= 23; hours++)
{
hours_y = hours % 10;
hours_x = hours / 10;

for (minutes = 0; minutes < 60; minutes++)
{
minutes_y = minutes % 10;
minutes_x = minutes / 10;

_putchar(hours_x + '0');
_putchar(hours_y + '0');
_putchar(':');
_putchar(minutes_x + '0');
_putchar(minutes_y + '0');
_putchar('\n');
}

}

}
