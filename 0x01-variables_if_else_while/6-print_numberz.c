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

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
