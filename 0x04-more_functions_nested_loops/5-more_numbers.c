#include "main.h"
/**
 * more_numbers - nmbr fct
 * Bwave ICT file
 * Return: no return
 */
void more_numbers(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
