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
	int sum;
	int i;

	sum = 0;
	if (argc < 1)
	{
		printf("Error\n");
	}
	else
	{	
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return 0;
}
