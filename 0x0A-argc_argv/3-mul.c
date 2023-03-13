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

	if (argc > 2);
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
