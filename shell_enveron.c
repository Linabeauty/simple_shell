#include "shell.h"

/**
 * my_env - print out the current environment
 * @info: Structure containing potential args. Used to manage
 * constant function prototype
 * Return: Success 0
 */
int my_env(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * my_getenv - get the value of an environment variable
 * @info: Structure containing potential arguments. Used to manage
 * @name: env variable name
 *
 * Return: Value
 */
char *my_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
	p = starts_with(node->str, name);
	if (p && *p)
		return (p);
	node = node->next;
	}
	return (NULL);
}

/**
 * my_setenv - Initialize new environment variable or modify an existing one
 * @info: Structure containing potential args. Used to manage
 *        constant function prototype
 *  Return: Success 0
 */
int my_setenv(info_t *info)
{
	if (info->argc != 3)
	{
	_eputs("Incorrect number of arguments\n");
	return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
	return (0);
	return (1);
}

/**
 * my_unsetenv - Remove an environment variable
 * @info: Structure containing potential args. Used to control
 * constant function prototype
 * Return: Success 0
 */
int my_unsetenv(info_t *info)
{
	int x;

	if (info->argc == 1)
	{
	_eputs("Too few arguments.\n");
	return (1);
	}
	for (x = 1; x <= info->argc; x++)
	_unsetenv(info, info->argv[x]);

	return (0);
}

/**
 * populate_env_list - populates environment linked list
 * @info: Structure containing potential arguments. Used to control
 * constant function prototype
 * Return: Success 0
 */
int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t x;

	for (x = 0; environ[x]; x++)
	add_node_end(&node, environ[x], 0);
	info->env = node;
	return (0);
}
