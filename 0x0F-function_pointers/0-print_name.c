#include "function_pointers.h"
/**
 * print_name - execute a function given as a parameter
 * @name: parameter that function ptr needs
 * @f:function to execute
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
