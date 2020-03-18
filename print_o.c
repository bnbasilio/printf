#include "holberton.h"
/**
 *print_o - converts an unsigned integer to octal number
 *@ag: number to be converted
 *Return: pointer to character array containing converted number
 */
char *print_o(va_list ag)
{
	/*declarations */
	/* read-in integer / temporary holder of integer and remainder */
	unsigned int int_t, temp;
	/* output string */
	char *s;
	/* digits in num / iterator / sign of number */
	unsigned int digits, j;

	int_t = va_arg(ag, unsigned int);
	digits = 1;

	/* how many digits in number */
	temp = int_t;
	while (temp / 8)
	{
		digits++;
		temp /= 8;
	}

	/* malloc for number */
	s = malloc(sizeof(char) * (digits + 1));
	if (s == NULL)
		return (NULL);

	/* place our number in char *s */
	j = 0;
	while (int_t)
	{
		temp = int_t % 8;
		s[j++] = temp + '0';
		int_t /= 8;
	}
	s[j] = '\0';
	rev_string(s);
	return (s);
}

