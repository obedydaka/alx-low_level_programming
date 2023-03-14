#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: This program prints the addition of two numbers
 * @argc: Arguments count
 * @argv: Argument array
 * Return: return 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int add;
	int x;
	int y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc < 3)
	{
		if (!(x <= 0 && y <= 0))
		{
			add = x + y;
			printf("%d\n", add);
		}
		else
		{
			printf("Error");
		}
	}
	return (0);
}
