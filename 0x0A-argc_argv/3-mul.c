#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Print the  multiplication of two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 * Return: Returns 1,If the program does not receive two arguments
 *         Returns 0, if the program recieve two arguments.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
		return (0);
}
