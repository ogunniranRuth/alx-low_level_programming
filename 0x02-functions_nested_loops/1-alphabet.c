#include "main.h"
/*  * print_alphabet - prints the alphabets in lower case
 *   * Return: returns 0 if successful
 */
void print_alphabet(void)
{
	char c = 'a';
	
		while (c <= 'z')
		{
			_putchar(c);
			c++;
			_putchar('\n');
		}
}


