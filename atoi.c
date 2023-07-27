#include "shell.h"

/**
 * interactive - returns true if shell is in interactive mode
 * @info: pointer to the info_t struct
 *
 * Return: Return 1 if in interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if a char is a delimiter
 * @c: The character to be checked
 * @delim: The delimiter string
 * Return: Return 1 if true, 0 if otherwise
 */
int is_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

/**
 * _isalpha - checks if there is an alphabetic character
 * @c: The character to be checked
 * Return:Return 1 if c is alphabetic, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - convert strings to an integer
 * @s: The strings to be converted
 * Return: Return 0 if no numbers in the string, or converted number otherwise
 */
int _atoi(char *s)
{
	int x, sign = 1, flag = 0;
	unsigned int result = 0;

	for (x= 0; s[x] != '\0' && flag != 2; x++)
	{
		if (s[x] == '-')
			sign *= -1;

		if (s[x] >= '0' && s[x] <= '9')
		{
			flag = 1;
			result = result * 10 + (s[x] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	return (sign * (int)result);
}
