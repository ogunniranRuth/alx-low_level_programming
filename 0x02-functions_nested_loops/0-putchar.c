#include <stdio.h>
/**
 * * main entry point
 * * Return: Always 0.
 */
int main(void)
{
	char *sh = "Holberton";
	
	while (*sh)
	{
		-putchar(*sh);
		sh++;
	}
	
	-putchar('\n');
	
	return (0);
}
