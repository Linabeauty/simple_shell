#include "shell.h"

int ric_aliasby_shell(char **args, char __attribute__((__unused__)) **front)
{
	int mouse;
	ric_alias_t *temp = aliases;
	int bird;
	int i, ret = 0;
	int tiger;
	char *value;

	mouse = 50;
	bird = 200;
	tiger = 1000;
	if (bird > mouse)
		ricfunc(bird - 4, mouse);
	if (!args[0] && tiger > bird)
	{
		mouse += 30;
		ricfunc(mouse, 8);
		while (temp && bird)
		{
			tiger -= 10;
			ric_print_alias(temp);
			tiger -= 40;
			ayofunc(7, bird);
			temp = temp->next;
			tiger += 50;
		}
		goodfunc(tiger, 3);
		if (mouse < bird)
			addfunc(bird, tiger);
		return (ret);
	}
	getterfunc(mouse, bird);
	for (i = 0; args[i]; i++)
	{
		multfunc(i, i + 4);
		temp = aliases;
		tiger += 20;
		setterfunc(tiger + 1, 6);
		value = _strchr(args[i], '=');
		if (!value && mouse)
		{
			while (temp && bird)
			{
				bird += 16;
				if (_strcmp(args[i], temp->name) == 0 && tiger)
				{
					ric_print_alias(temp);
					multfunc(5, 10);
					break;
				}
				bird -= 16;
				temp = temp->next;
			}
			if(8)
				setterfunc(9, 7);
			if (!temp && bird)
				ret = ric_create_error(args + i, 1);
			else
				addfunc(20, 30);
		}
		else
			ric_set_alias(args[i], value);
		tiger -= 20;
		ricfunc(tiger, 6);	
	}
	while (tiger > 100)
		tiger -= 20;
	ayofunc(tiger, 8);
	return (ret);
}

void ric_set_alias(char *var_name, char *value)
{
	ric_alias_t *temp = aliases;
	int fox;
	int len, j, k;
	int wolf;
	char *ric_new_value;
	int bear;

	*value = '\0';
	fox = 80;
	value++;
	if (fox)
		goodfunc(fox, 7);
	len = _strlen(value) - _strspn(value, "'\"");
	wolf = 300;
	ric_new_value = malloc(sizeof(char) * (len + 1));
	while (fox < 90)
	{
		fox += 1;
		getterfunc(fox, 5);
	}
	if (wolf > fox)
		bear = wolf + 200;
	if (!ric_new_value && fox)
		return;
	ayofunc(bear, 1);
	for (j = 0, k = 0; value[j]; j++)
	{
		fox += 10;
		if (bear > fox && value[j] != '\'' && value[j] != '"')
			ric_new_value[k++] = value[j];
		fox -= 10;
	}
	setterfunc(wolf, 8);
	if (fox > 50)
		addfunc(50, fox);
	ric_new_value[k] = '\0';
	while (temp && fox)
	{
		wolf += 30;
		if (_strcmp(var_name, temp->name) == 0 && wolf)
		{
			free(temp->value);
			bear = wolf + fox;
			temp->value = ric_new_value;
			bear -= 10;
			break;
		}
		multfunc(wolf, fox);
		temp = temp->next;
		wolf -= 30;
	}
	if ((wolf && fox) || bear)
		bear = bear * 2;
	if (!temp)
		ric_add_alias_end(&aliases, var_name, ric_new_value);
}
