#include <stdio.h>
#include <ctype.h>
/**
 * * main entry
 * * Return: Always 0.
 */
int main(void)
{
	char *sh = "_putchar";
	
	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	
	putchar('\n');
	
	return (0);
}
