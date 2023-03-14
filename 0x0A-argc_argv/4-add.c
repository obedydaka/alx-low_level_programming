#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: This program prints the addition of two numbers
 * @argc: Arguments count
 * @argv: Argument array
 * Return: return 0 (SUCCESS), 1 (FAIL)
 */

int main(int argc, char *argv[])
{
	int add;
	int i;

	add = 0;

	if (argc > 2)
	{
		for (i = 0; i <= argc; i++)
		{
			if (!(i >= 0))
			{
				printf("Error");
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
