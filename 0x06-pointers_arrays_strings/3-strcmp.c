#include "main.h"
/**
* _strcmp -> function that compare two strings
* @s1: parameter for string one
* @s2: parameter for string two
* Return:
* returns zere if s1 == s2
* returns negative value if s1 < s2
* returns positive value if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}
