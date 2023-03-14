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
	int x;
	int y;
	int add;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc > 2)
	{
		if (!((x >= 0 && x <= 9) && (y >= 0 && y <= 9)))
		{
			printf("Error");
		}
		else
		{
			add = x + y;
			printf("%d\n", add);
		}
	}
	else
	{
		printf("Error");
	}
	return (0);
}
