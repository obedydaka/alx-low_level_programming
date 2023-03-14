#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: This program prints it's name
 * @argc: Arguments count
 * @argv: Argument array
 * Return: return 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	signed int mul;
	signed int x;
	signed int y;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		mul = x * y;
		printf("%d\n", mul);
		return (0);
	}
}
