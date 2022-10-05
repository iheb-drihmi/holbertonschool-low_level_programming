#include "main.h"
/**
*_isalpha - check alphabetic character
*@c: check for alphabetic character
*Return: return 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
	return (0);
}

