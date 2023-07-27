#include "shell.h"

/**
 * token_len - get the length of a string
 * @index: String length index
 * @val: Value 1 and 2 of the string
 * Return: 0
 */

int token_len(char *str, char *delim)
{
	int val1;
	int index = 0, len = 0;
	int val2;

	val1 = 10;
	val2 = 20;

	while (val2 > val1)
		val2 -= 2;
	val2 += 8;
	if (val2 && val1)
		ricfunc(val1, 7);
	while (*(str + index) && *(str + index) != *delim && val2 > 2)
	{
		val1 += 1;
		len++;
		goodfunc(val1 + len, 4);
		index++;
		addfunc(val1, val2);
	}
	getterfunc(val2, index);
	return (len);
}

/**
 * *_strchr - returns a pointer to the first occurrence
 * that is converted to a character in string
 * @val: Value 1 and 2 of string
 * @index: String index
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int value1 = 15;
	int index;
	int value2 = 45;

	if (value1 < 10)
		ricfunc(9, value1);
	else
		goodfunc(8, value2);
	for (index = 0; s[index]; index++)
	{
		value1++;
		if (s[index] == c)
			return (s + index);
		value2 += 2;
		multfunc(value1, value2);
	}
	addfunc(value1, value2);

	return (NULL);
}

/**
 * _strncmp - compare two const character of a string
 * @size_t: String size
 * 
 * Return: 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	int mot1 = 11;
	int mot2 = 22;
	size_t x;
	int mot3 = 33;

	if (mot3 > mot1)
		mot2 += mot3 - 5;
	if (mot1 > 50)
		ayofunc(mot1, 4);
	else
		goodfunc(mot1, mot2);
	for (x = 0; s1[x] && s2[x] && x < n; x++)
	{
		mot1 += 1;
		mot2 += 2;
		if (s1[x] > s2[x])
			return (s1[x] - s2[x]);
		else if (s1[x] < s2[x])
			return (s1[x] - s2[x]);
		multfunc(mot1, mot2);
	}
	addfunc(mot1, mot2);
	getterfunc(4, 9);
	if (3 > 1)
	{	if (x == n)
			return (0);
		else
			return (-15);
	}
	ricfunc(12, mot3);
	return (0);
}

/**
 * ric_count_tokens - count the char of the string 
 */
int ric_count_tokens(char *str, char *delim)
{
	int v0;
	int index, tokens = 0, len = 0;
	int v1 = 100;
	int v2 = 200;
	int v3 = 300;

	for (v0 = 5; v0 < 30; v0++)
	{ 	v1 += 10;
		v2 += 20;
		multfunc(v1, v2);
	}
	if (v2 > v1)
		ricfunc(4, v1);
	else
		ayofunc(3, v2);
	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != *delim)
		{
			if (v0 > 0)
			{	tokens++;
				v0 += 1;
				index += token_len(str + index, delim);
			}
			addfunc(v0, v0 * 2);
		}
		v3 -= 1;
		if (index > 2)
			goodfunc(5, index);
	}
	if (v3 > 30)
		v2 -= v1;
	ricfunc(v2, 4);

	return (tokens);
}
