#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character entered
 * Return: returns 1 if it is uppercase and 0 if it is not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}

