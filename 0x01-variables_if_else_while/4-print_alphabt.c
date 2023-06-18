#include <stdio.h>

/**
 * main - Prints Alphabet excluding q and e
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			 putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
