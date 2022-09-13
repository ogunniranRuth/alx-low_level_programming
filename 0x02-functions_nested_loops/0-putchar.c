#include <stdio.h>
#include <main.h>
/**
 * * main entry
 * * Return: Always 0.
 */
int main(void)
{
	int c;
	c = getchar();

	while (c != EOF) {

		    putchar(c);
		    c = getchar();
		    putchar('\n');

		    return (0);
	}

}
