#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: name input
 * @f: pointer function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
