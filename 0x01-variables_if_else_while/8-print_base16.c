#include <stdio.h>
/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	char ch;
	int i;

	for(i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for(ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
