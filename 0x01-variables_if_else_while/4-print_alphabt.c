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
	char llt;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (llt = 'a'; llt <= 'z'; llt++)
	{
		while (llt != e && llt != q)
		{
			putchar(llt);
		}
	}
	putchar('\n');

	return (0);
}
