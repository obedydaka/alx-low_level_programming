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

	for (llt = 'z'; llt >= 'a'; llt--)
	{
		putchar(llt);
	}
	putchar('\n');

	return (0);
}
