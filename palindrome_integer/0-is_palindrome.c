#include "palindrome.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * is_palindrome - checks to see if number is palindrome
 * @n : number
 *
 * Return: 1 if palindrome, 0 if not a palindrome.
 */

int is_palindrome(unsigned long n)
{

	int rev = 0;
	int og = n;
	int rem = 0;


	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}

	if (og == rev)
		return (1);

	else
		return (0);

}
