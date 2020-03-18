#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: input string to be reversed
 */
void rev_string(char *s)
{
	char *beg, *end, temp;

	beg = s;
	end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (beg < end)
	{
		temp = *beg;
		*beg = *end;
		*end = temp;
		beg++;
		end--;
	}
}
