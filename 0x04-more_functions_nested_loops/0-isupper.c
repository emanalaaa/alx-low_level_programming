#include <main.h>
/*
 * to checl if its uppercase
 * or lowecase
 * letter
 * */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
