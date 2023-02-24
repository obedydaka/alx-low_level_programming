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
	int i;
	
	for (i = 0; i <= 100; i++)
	{
		if (i != 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
				continue;
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
				continue;
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
				continue;
			}
			printf("%d ", i);
		}
	}
}
