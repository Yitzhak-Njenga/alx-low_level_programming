#include "main.h"

/**
* -strcat - Entry point
*
* @b:constant byte
*
* @s:pointed
*
* @n:byte
*
* Return: 0
*/

char *_strcat(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
