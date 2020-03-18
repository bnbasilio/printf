#include "holberton.h"
/**
 **print_rot13 - encodes a string using rot13
 *@ag: string to be encoded
 *Return: pointer to encoded string
 */
char *print_rot13(va_list ag)
{
	int i = 0, length = 0;
	char *s = va_arg(ag, char*);
	char *ptr_s, *ret;
	char *encodeThis = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translateTo = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++, length++)
		;

	ret = malloc(sizeof(char) * (length + 1));
	if (ret == NULL)
		return ("(null)");
	ptr_s = ret;
	while (*s)
	{
		for (i = 0; encodeThis[i]; i++)
		{
			if (*s == encodeThis[i])
			{
				*ptr_s = translateTo[i];
				break;
			}
		}
		ptr_s++;
		s++;
	}
	return (ret);
}

