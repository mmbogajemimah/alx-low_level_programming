#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 if successful
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);	
}
