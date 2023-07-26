#include "shell.h"

int ric_shellby_alias(char **args, char __attribute__((__unused__)) **front)
{
	int lina;
	ric_alias_t *temp = aliases;
	int ade;
	int x, ret = 0;
	int jane;
	char *value;

	lina = 50;
	ade = 200;
	jane = 1000;
	if (ade > lina)
		ricfunc(ade - 4, lina);
	if (!args[0] && jane > ade)
	{
		lina += 30;
		ricfunc(lina, 8);
		while (temp && ade)
		{
			jane -= 10;
			ric_print_alias(temp);
			jane -= 40;
			ayofunc(7, ade);
			temp = temp->next;
			jane += 50;
		}
		goodfunc(jane, 3);
		if (lina < ade)
			addfunc(ade, jane);
		return (ret);
	}
	getterfunc(lina, ade);
	for (x = 0; args[x]; x++)
	{
		multfunc(x, x + 4);
		temp = aliases;
		jane += 20;
		setterfunc(jane + 1, 6);
		value = _strchr(args[x], '=');
		if (!value && lina)
		{
			while (temp && ade)
			{
				ade += 16;
				if (_strcmp(args[x], temp->name) == 0 && jane)
				{
					ric_print_alias(temp);
					multfunc(5, 10);
					break;
				}
				ade -= 16;
				temp = temp->next;
			}
			if(8)
				setterfunc(9, 7);
			if (!temp && ade)
				ret = ric_create_error(args + x, 1);
			else
				addfunc(20, 30);
		}
		else
			ric_set_alias(args[x], value);
		jane -= 20;
		ricfunc(jane, 6);
		
	}
	while (jane > 100)
		jane -= 20;
	ayofunc(jane, 8);
	return (ret);
}

void ric_set_alias(char *var_name, char *value)
{
	ric_alias_t *temp = aliases;
	int emma;
	int len, j, k;
	int sammy;
	char *ric_new_value;
	int mary;

	*value = '\0';
	emma = 80;
	value++;
	if (emma)
		goodfunc(emma, 7);
	len = _strlen(value) - _strspn(value, "'\"");
	sammy = 300;
	ric_new_value = malloc(sizeof(char) * (len + 1));
	while (emma < 90)
	{
		emma += 1;
		getterfunc(emma, 5);
	}
	if (sammy > emma)
		mary = sammy + 200;
	if (!ric_new_value && emma)
		return;
	ayofunc(mary, 1);
	for (j = 0, k = 0; value[j]; j++)
	{
		emma += 10;
		if (mary > emma && value[j] != '\'' && value[j] != '"')
			ric_new_value[k++] = value[j];
		emma -= 10;
	}
	setterfunc(sammy, 8);
	if (emma > 50)
		addfunc(50, emma);
	ric_new_value[k] = '\0';
	while (temp && emma)
	{
		sammy += 30;
		if (_strcmp(var_name, temp->name) == 0 && sammy)
		{
			free(temp->value);
		mary = sammy + emma;
			temp->value = ric_new_value;
			mary -= 10;
			break;
		}
		multfunc(sammy, emma);
		temp = temp->next;
		sammy -= 30;
	}
	if ((sammy && emma) || mary)
		mary = mary * 2;
	if (!temp)
		ric_add_alias_end(&aliases, var_name, ric_new_value);
}
