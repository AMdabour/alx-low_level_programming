#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is composed of digits only
 * @str: the string to check
 * Return: 1 if the string is composed of digits only, 0 otherwise
*/
int is_number(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}

/**
 * multiply - multiplies two numbers
 * @num1: the first number
 * @num2: the second number
 * Return: the product of num1 and num2
*/
int multiply(char *num1, char *num2)
{
	int n1 = atoi(num1);

	int n2 = atoi(num2);

	return (n1 * n2);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 * Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}
