#include "handler.h"
#include<stdio.h>

void hello()
{
	printf("from other");
}

/**
 * @brief Checks if the given string is a binary string.
 *
 * This function iterates through each character of the input string
 * and checks if it is either '0' or '1'. If any character is found
 * that is not '0' or '1', the function returns 0 (false). If all
 * characters are '0' or '1', the function returns 1 (true).
 *
 * @param s The input string to be checked.
 * @return 1 if the string is a binary string, 0 otherwise.
 */

_Bool is_bin_str(char* s)
{
	while (s != '\0')
	{
		if (!(s == '1' || s == '0'))
			return 0;
	}
	return 1;
}

char* remove_spaces(char* str)
{
	return '\0';
}
