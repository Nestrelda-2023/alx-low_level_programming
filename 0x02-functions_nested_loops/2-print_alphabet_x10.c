#include "main.h"

/**
 * main - print 10 times the alphabet followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
