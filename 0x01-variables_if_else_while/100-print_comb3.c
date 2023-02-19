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

	for (i = '0'; i < '9'; i++)
	{
		for (n = i + 1; n <= '9'; n++)
		{
			if (n != i)
			{
				putchar(i);
				putchar(n);

				if (i == '8' && n == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
