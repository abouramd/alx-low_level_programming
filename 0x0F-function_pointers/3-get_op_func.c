#include "3-calc.h"

/**
 * get_op_func- function operater
 * @s: second num
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (op[i].op)
	{
		if (strcmp(op[i].op, s))
			return (op[i].op);
		i++;
	}
	return (NULL);
}

