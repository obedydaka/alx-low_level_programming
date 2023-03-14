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
	int y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc != 3)
	{
		if (!(x <= 0 && y <= 0))
		{
			printf("Error");
			return (1)
		}
		else
		{
			add = x + y;
			printf("%d\n", add);
			return (0)
		}
	}
}
