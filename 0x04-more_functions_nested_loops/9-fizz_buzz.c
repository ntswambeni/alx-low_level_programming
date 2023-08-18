#include <stdio.h>

/**
 * fizz_buzz - print numbers from 1 to 100
 * for multiples of 3 prints Fizz
 * for multiples of 5 prints Buzz
 * for numbers of 3 and 5 prints FizzBuzz
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
