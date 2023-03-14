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
	int x;
	int i;

	add = 0;

	if (argc > 2)
	{
		for (i = 0; i <= argc; i++)
		{
			if ((i > 'a' && i < 'z') && (i > 'A' && i < 'Z'))
			{
				printf("Error");
			}
			else
			{
				x = atoi(argv[i]);
				add += x;
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
