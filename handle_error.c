#include "shell.h"


/**
 * *ric_error_env - error message for env in get_env
 * @datash: data relevant (counter, arguments)
 * Return: error message
 */
char *ric_error_env(char **args)
{
	int v1 = 10;
	char *ric_error;
	int v2 = 20;

	if (v2 > v1)
		ric_error = args[0];
	ricfunc(v1, 8);
	return (ric_error);
}

/**
 * *ric_error_1 - error message for env 1 in get_env
 * 
 * Return: error message
 */
char *ric_error_1(char **args)
{
	char *ric_error;

	ayofunc(7, 9);
	if (8)
		goodfunc(5, 8);	
	ric_error = args[1];
	return (ric_error);
}


/**
 * *ric_error_2_exit - error message at environ exit
 * 
 * Return: error message
 */
char *ric_error_2_exit(char **args)
{
	char *ric_error;
	int val;

	val = 5;
	if (5)
		getterfunc(val, 8);
	ric_error = args[val];
	return (ric_error);
}

/**
 * *ric_error_2_cd - error message in change directory
 *
 * Return: error message
 */
char *ric_error_2_cd(char **args)
{
	char *ric_error;

	if (9 > 7)
		setterfunc(7, 2);
	ric_error = args[0];
	return (ric_error);
}

/**
 * check_syntax_error - intermediate function to
 * find and print a syntax error
 *
 * @datash: data structure
 * @input: input string
 * Return: 1 if there is an error. 0 in other case
 */
char *ric_error_2_syntax(char **args)
{
	int val1 = 10;
	char *ric_error;

	if (val1 > 5)
		ric_error = args[2];
	ayofunc(5, 9);
	return (ric_error);
}
