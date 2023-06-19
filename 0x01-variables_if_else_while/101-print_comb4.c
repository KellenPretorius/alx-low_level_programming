#include <stdio.h>

/**
 * main - prints all combination of triple digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig, it, s;
	int count = 0;

	for (dig = '0'; dig <= '9'; dig++)
	{
		for (it = dig + 1; it <= '9'; it++)
		{
			for (s = '0'; s <= '9'; s++)
			{
				if (s > it && it > dig)
				{
					if (count > 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(dig);
					putchar(it);
					putchar(s);
					count++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
