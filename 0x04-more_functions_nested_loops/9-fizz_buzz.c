#include <main.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints a sequence of 1 to 100
 * on a multiple of 3, has been replaced by "Fizz" and on
 * a multiple of 5 with "Buzz" and for both 5 and 3 with "FizzBuzz"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
