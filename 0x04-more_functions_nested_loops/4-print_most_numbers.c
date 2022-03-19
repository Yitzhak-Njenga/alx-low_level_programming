#include "main.h"

/**
* print_most_numbers - check you done
*
* Return void
*
*/
void print_most_numbers(void)
{
char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
