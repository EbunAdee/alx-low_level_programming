#include <stdio.h>

/**
 * Main: A program that Prints all arguments it receives..
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 */

int main(int argc, char *argv[])
{
	int a;
	
	for(a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
