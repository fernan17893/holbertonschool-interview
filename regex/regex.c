#include <stdlib.h>
#include <stdio.h>

#include "regex.h"

/**
 * regex_match - function that checks whether pattern matches a given string
 *
 *  @str: string to scan
 *  @pattern: regular expression
 *
 * Return: 1 if the pattern matches the string, or 0 if it doesn’t
 */


int regex_match(char const *str, char const *pattern)
{
	if (!*str && !*pattern)
		return (1);
	if (*str == *pattern || (*pattern == '.' && *(pattern + 1) != '*'))
		return (regex_match(str + 1, pattern + 1));
	if (*pattern == '.' && *(pattern + 1) == '*')
		return (regex_match(str, pattern + 2) || regex_match(str + 1, pattern));
	if (*(pattern + 1) == '*')
		return (regex_match(str, pattern + 2));
	return (0);
}
