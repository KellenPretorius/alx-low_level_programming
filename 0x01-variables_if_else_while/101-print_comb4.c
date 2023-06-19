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

	for (dig = '0'; dig <= '9'; dig++)
	{
		for (it = dig + 1; it <= '0'; it++)
		{
		        for (s = it + 1; s <= '9'; s++)
			{
				if ((it != dig) != s)
				{
					putchar(dig);
					putchar(it);
					putchar(s);

					if (dig == '7' && p == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
