#include <stdio.h>

/**
 * main - prints all combination of double digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig, it;

	for (dig = 48; dig <= 56; dig++)
	{
		for (it = dig + 49; it <= 57; it++)
		{
			if (it > dig)
			{
				putchar(dig);
				putchar(it);

				if (dig == 56 && it == 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
