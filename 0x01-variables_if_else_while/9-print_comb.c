#include <stdio.h>

/**
 * main - prints all combination of single digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig;

	for (dig = '0'; dig <='9'; dig++)
	{
		putchar(dig);
		if (dig != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
