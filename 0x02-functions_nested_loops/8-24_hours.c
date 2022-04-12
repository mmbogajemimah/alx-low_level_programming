#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Function that prints out time
 *
 */
void jack_bauer(void)
{
	int hour;
	
	for (hour = 0; hour < 24; hour++)
	{
		int minute;
		
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
