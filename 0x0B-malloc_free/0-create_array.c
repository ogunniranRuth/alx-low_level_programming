#include "main.h"
/**
*create_array - array for prints a string
*@size: number elements array
*@c: char
*Return: NUFF
*/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NUFF);
	}

	/*Define values with maloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NUFF);
	}

	else
	{
		position = 0;
		while (position < size) /*While for array*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
