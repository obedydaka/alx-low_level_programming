#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Destricption: This program is a keygen
 * Return: Integer as Password
 */

int main(void)
{
	int password;

	srand(time(0));

	for (int index = 0; index < 6; index++)
	{
		printf("%d", rand());
	}
	return(0);
}

