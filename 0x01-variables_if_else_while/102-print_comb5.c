#include <stdio.h>
#include <stdlib.h>

/**
 * main - Begin code
 * Description
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int n;
	int b;
	int c;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (i = '0' ; i <= '9'; i++)
			{
				for (n = i + 1; n <= '9'; n++)
				{
					if (n != i)
					{
						putchar(b);
						putchar(c);
						putchar(' ');
						putchar(i);
						putchar(n);

						if (i == '8' && n == '9')
						{
							continue;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
