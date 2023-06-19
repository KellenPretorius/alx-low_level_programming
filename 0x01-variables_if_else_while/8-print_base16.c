#include <stdio.h>

/**
 * main - print base16 in lower case
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int base;
	char alpha;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
