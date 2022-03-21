#include "main.h"

/*
* swap_int - swaping
*
* @a: param
* @b: param
*
* Return: void
*
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = *&c;

}
