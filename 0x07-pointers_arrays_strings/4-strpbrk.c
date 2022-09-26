#include" main.h"
/**
* _strpbrk - matches any character speicified
* @s: this is the C string to be scanned.
* @accept: character in strl that matchs of on the character
* Return: string s that matched any character specified.
*/

char *_strpbrk (char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}
		s++;
	}
	return (0);
}
