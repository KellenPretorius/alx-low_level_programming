#include <stdio.h>

/**
 * main - Prints base 10 digits but using char converted int
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		char charNum = num + '0';
		putchar(charNum);
	}
	putchar('\n');
	return (0);
}
