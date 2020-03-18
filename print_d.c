#include "holberton.h"
/**
 *print_d - prints integers
 *@ag: list of arguments
 *@flags: format tags
 *Return: pointer to the integer to be printed
 */
char *print_d(va_list ag, flags_t flags)
{
	long int int_t, temp;
	char *s;
	int digits, i, sign;

	digits = 1;
	sign = 1;

	int_t = va_arg(ag, int);

	/*count digits*/
	temp = int_t;
	while (temp / 10)
	{
		digits++;
		temp /= 10;
	}

	/*determine if number is negative*/
	if (int_t < 0)
		sign = -1;

	/*malloc size depending on digit count*/
	s = malloc(sizeof(char) * (digits + 1));
	if (s == NULL)
		return (NULL);

	/*place number into char *s*/
	i = 0;
	while (int_t)
	{
		s[i] = int_t % 10 * sign + '0';
	}
	s[i] = '\0';
	return (s);
}
