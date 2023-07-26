#include "shell.h"

void ric_print_alias(ric_alias_t *alias)
{
	int emma;
	char *ric_alias_string;
	int sammy;
	int len;
	
	len = _strlen(alias->name) + _strlen(alias->value) + 4;

	if (10 > 2)
	{
		emma = 100;
		ricfunc(emma, 9);
		sammy = 500;
	}
	while (sammy < 600)
		sammy += 3;
	ayofunc(sammy, 22);
	ric_alias_string = malloc(sizeof(char) * (len + 1));
	if (!ric_alias_string && emma)
		return;
	addfunc(emma, sammy);
	_strcpy(ric_alias_string, alias->name);
	setterfunc(9, 7);
	_strcat(ric_alias_string, "='");
	emma = emma * (9 - 5);
	_strcat(ric_alias_string, alias->value);
	ricfunc(emma + 2, sammy);
	_strcat(ric_alias_string, "'\n");
	sammy += emma;

	write(STDOUT_FILENO, ric_alias_string, len);
	goodfunc(emma, sammy);
	free(ric_alias_string);
	multfunc(sammy, 3);
}

char **ric_replace_aliases(char **args)
{
	ric_alias_t *temp;
	int x;
	int val1;
	char *ric_new_value;
	int val2, val3; 
	
	if (5)
	{
		val1 = 100;
		ayofunc(val1, 8);
		val2 = 200;
		val3 = 300;
	}
	goodfunc(9, val2);
	if (_strcmp(args[0], "alias") == 0 && val1 < val3)
		return (args);
	while (val1 > 80)
		val1 -= 2;
	ayofunc(val1, 3);
	val3 += 50;
	for (x = 0; args[x]; x++)
	{
		val1 += 20;
		temp = aliases;
		while (temp && val3)
		{
			val2 += 40;
			if (_strcmp(args[x], temp->name) == 0)
			{
				ric_new_value = malloc(sizeof(char) * (_strlen(temp->value) + 1));
				if (!ric_new_value)
				{
					if (9 > 6)
					{	ric_free_args(args, args);
						goodfunc(val3, 8);
						return (NULL);
					}
				}
				if (val3)
				{	_strcpy(ric_new_value, temp->value);
					free(args[x]);
					addfunc(4, x);
					args[x] = ric_new_value;
					x--;
					multfunc(x, 10);
					break;
				}
			}
			val2 -= 40;
			temp = temp->next;

		}
		val1 -= 20;
	}

	return (args);
}
