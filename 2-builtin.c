#include "shell.h"


/**
 * _myhistory - displays history list, one command per line, proceded
 * with line numbers starting from 0
 * @info: Pointer to the structure containing potential args
 * Used to maintain constant function prototype.
 * Return: Success 0
 */
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}

/**
 * unset_alias - Unsets an alias string from the alias list
 * @info: Pointer to the parameter structure
 * @str: The string containing the alias
 * Return: 0 upon success, 1 upon error
 */
int unset_alias(info_t *info, char *str)
{
	char *p, s;
	int ret;

	p = _strchr(str, '=');
	if (!p)
	return (1);
	s = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
	get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = s;
	return (ret);
}

/**
 * set_alias - Sets an alias string in the alias list
 * @info: Pointer to the parameter structure
 * @str: The string containing the alias
 * Return: 0 upon success, 1 upon error
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
	return (1);
	if (!*++p)
		return (unset_alias(info, str));

	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * print_alias - Prints an alias string
 * @node: Pointer to the alias node
 * Return: 0 upon success, 1 upon error
 */
int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)

{
	p = _strchr(node->str, '=');
	for (a = node->str; a <= p; a++)
	_putchar(*a);
	_putchar('\'');
	_puts(p + 1);
	_puts("'\n");
	return (0);
}
	return (1);
}

/**
 * _myalias - copy the alias builtin (man alias)
 * @info: Pointer to the structure containing potential args
 * Used to manage constant function prototype
 * Return: Success 0
 */
int _myalias(info_t *info)
{
	int x = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
	node = info->alias;
	while (node)
	{
	print_alias(node);
	node = node->next;
	}
	return (0);
	}
	for (x = 1; info->argv[x]; x++)
	{
	p = _strchr(info->argv[x], '=');
	if (p)
		set_alias(info, info->argv[x]);
	else
		print_alias(node_starts_with(info->alias, info->argv[x], '='));
	}

	return (0);
