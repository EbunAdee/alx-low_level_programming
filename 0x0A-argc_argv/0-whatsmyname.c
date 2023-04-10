#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char **arg)

{
	printf("%s\n", *argv);
	return (0);
}
