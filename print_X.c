#include "holberton.h"
/**
 *print_X - converts an unsigned int to an uppercase hexadecimal number
 *@ag: number to be converted
 *Return: pointer to character array containing converted number
 */
char *print_X(va_list ag)
{
	/*declarations */
	/* read-in integer / temporary holder of integer and remainder */
	unsigned int int_t, temp;
	/* output string */
	char *s;
	/* digits in num / iterator / sign of number */
	int digits, j;

	int_t = va_arg(ag, int);
	digits = 1;

	/* how many digits in number */
	temp = int_t;
	while (temp / 16)
	{
		digits++;
		temp /= 16;
	}

	/* malloc for number */
	s = malloc(sizeof(char) * (digits + 1));
	if (s == NULL)
		return (NULL);

	/* place our number in char *s */
	j = 0;
	while (int_t)
	{
		temp = int_t % 16;
		if (temp < 10)
			temp = temp + '0';
		else
			temp = temp + ('A' - 10);
		s[j++] = temp;
		int_t /= 16;
	}
	s[j] = '\0';
	rev_string(s);
	return (s);
}

