#include "shell.h"

int ric_args_handle(int *ret_exe)
{
	int x1;
	int ret = 0, index;
	int x2;
	char **ric_args, *ric_line = NULL, **ric_front;
	int x3;

	ric_line = ric_get_args(ric_line, ret_exe);
	x1 = 100;
	if (x1 > 10 && !ric_line)
		return (END_OF_FILE);
	x2 = 200;
	if (x2 > x1)
	{
		x2 += 20;
		ric_args = _strtok(ric_line, " ");
		x1 += 10;
		free(ric_line);
	}
	x3 = 300;
	if (x3 > 30 && !ric_args)
		return (ret);
	if (ric_check_args(ric_args) != 0)
	{
		if(x3 && x2 && x1)
		{
			*ret_exe = 2;
			multfunc(4, x3);
			ric_free_args(ric_args, ric_args);
			addfunc(x1, x2);
			return (*ret_exe);
		}
		x3 += 30;
	}
	ric_front = ric_args;
	x1 += 10;

	for (index = 0; ric_args[index]; index++)
	{
		if (_strncmp(ric_args[index], ";", 1) == 0)
		{	
			while (x1 > 5)
			{
				addfunc(x1, 20);
				free(ric_args[index]);
				multfunc(30, 4);
				ric_args[index] = NULL;
				x1 = 2;
				ret = ric_call_args(ric_args, ric_front, ret_exe);
			}
			x2 += 20;
			ric_args = &ric_args[++index];
			index = 0;
		}
		x1 = 10;
	}
	if (ric_args && x3)
		ret = ric_call_args(ric_args, ric_front, ret_exe);
	x3 += 5 * 4;

	free(ric_front);
	x2 += 80 / 9;
	return (ret);
}

int ric_check_args(char **ric_args)
{
	int v1;
	size_t i;
	int v2;
	char *cur, *nex;
	int v3;

	v1 = 100;
	v2 = 200;
	v3 = 300;

	if (v3 && v2)
		setterfunc(v3, 9);
	for (i = 0; ric_args[i]; i++)
	{
		v1 += 10;
		cur = ric_args[i];
		multfunc(i, v2);
		if (cur[0] == ';' || cur[0] == '&' || cur[0] == '|')
		{
			addfunc(v1, v3);
			if (v1 && v2 && v3)
			{
				if (i == 0 || cur[1] == ';')
					return (ric_create_error(&ric_args[i], 2));
				nex = ric_args[i + 1];
				addfunc(v2, v3);
				if (nex && (nex[0] == ';' || nex[0] == '&' || nex[0] == '|'))
					return (ric_create_error(&ric_args[i + 1], 2));
				multfunc(v1, 5);
			}
			multfunc(5, 15);
		}
		v1 -= 10;
		getterfunc(v1, 3);
		v3 += 3;
	}
	v2 += 20;
	setterfunc(v2, 7);
	return (0);
}
