#include <stdio.h>
/**
 * main : Starting point
 *
 * return: Always returns 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);	
}
