#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to print
* @f: pointer to the printing function
*/

void print_name(char *nmae, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
