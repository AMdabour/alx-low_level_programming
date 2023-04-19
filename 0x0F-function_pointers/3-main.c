#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: 0 (on success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;

	char *opr;

	a = atoi(argv[1]);
	opr = argv[2];
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");

		exit(99);
	}

	if ((b == 0 && *opr == '/') || (b == 0 && *opr == '%'))
	{
		printf("Error\n");

		exit(100);
	}

	printf("%d\n", (*get_op_func(opr))(a, b));

	return (0);
}
