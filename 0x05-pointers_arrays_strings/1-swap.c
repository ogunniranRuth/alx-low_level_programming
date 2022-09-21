#inclu "main.h"
/**
* swap_int - Swaps the values of two integers.
* @a: first interger.
* @b: second interger.
* Return: no return.
*
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
