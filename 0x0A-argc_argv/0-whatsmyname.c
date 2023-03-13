#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints it's name
 * return: 0 (SUCCESS)
 */

int main(int argc, char* agrv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
