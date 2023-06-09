#include <stdio.h>
#include <stdlib.h>

/**
 * Main: A program that adds positive numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 * Return: Returns 1,If one of the number contains symbols that are not digits and returns 0, if none of the number contains symbols that are not digits.
 */

int main(int argc, char *argv[])
{
	int no, digit, add;
	for (no = 1; no < argc; no++)
	{
		for (digit = 0; argv[no][digit]; digit++)
		{
			if (argv[no][digit] < '0' || argv[no][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[no]);
	}

	printf("%d\n", add);
	return (0);
}
