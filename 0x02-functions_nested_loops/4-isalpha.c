#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c : character to check
 * Return: 1 if c is letter, lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}

