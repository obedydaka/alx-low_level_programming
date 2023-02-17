#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Begin
 * Description
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;
	char llt;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (llt = 'a'; llt <= 'f'; llt++)
	{
		putchar(llt);
	}
	putchar('\n');

	return (0);
}
