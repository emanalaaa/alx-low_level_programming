#include <main.h>
/*
 * to checl if its uppercase
 * or lowecase
 * letter
 * */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
