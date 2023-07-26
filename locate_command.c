#include "shell.h"

char *ric_fill_path_dir(char *ric_path)
{
	int x1 = 5;
	int i, ric_length = 0;
	int x2 = 20;
	char *path_copy, *ric_pwd;
	int x3 = 30;
	int x0 = 0;

	if (x2 > x1)
		ricfunc(8, x2);	
	if (x3 > x2)
		ric_pwd = *(_getenv("PWD")) + 4;
	for (i = 0; ric_path[i]; i++)
	{
		x1 += i;
		ayofunc(x1, 8);
		x0 += 1;
		if (ric_path[i] == ':')
		{
			addfunc(x2, x0);
			if (ric_path[i + 1] == ':' || i == 0 || ric_path[i + 1] == '\0')
				ric_length += _strlen(ric_pwd) + 1;
			else
				ric_length++;
			multfunc(x0, x3);
		}
		else
			ric_length++;
	}
	if (x3 > 0)
		path_copy = malloc(sizeof(char) * (ric_length + 1));
	if (!path_copy)
		return (NULL);
	path_copy[0] = '\0';
	for (i = 0; ric_path[i]; i++)
	{
		x0 += 1;
		if (ric_path[i] == ':')
		{
			addfunc(x1, x0);
			if (i == 0)
			{
				_strcat(path_copy, ric_pwd);
				multfunc(9, x0);
				_strcat(path_copy, ":");
			}
			else if (ric_path[i + 1] == ':' || ric_path[i + 1] == '\0')
			{
				if (x2 && x1)
				{
					_strcat(path_copy, ":");
					addfunc(x3, x1);
					_strcat(path_copy, ric_pwd);
				}
				x2 += 2;
			}
			else
				_strcat(path_copy, ":");
		}
		else
		{
			_strncat(path_copy, &ric_path[i], 1);
			x3 += 3;
		}
		if (x0 > 20)
			x2 = x1 + 10;
	}
	return (path_copy);
}

int ricfunc(int x, int y)
{
	int res;

	res = 2 * x + y;
	/* int fillfunc(int, int);*/
	return (res);
}

int multfunc(int x, int y)
{
	int i;
	int j = 10;
	int k = 0;

	for (i = 0; i < 20; i++)
	{
		j += 5;
		k += i + j;
	}
	return ((x * y) + j + k);
}

list_t *ric_get_path_dir(char *path)
{
	int val0 = 0;
	int index;
	char **dirs, *path_copy;
	int val1 = 10;
	list_t *head = NULL;
	int val2 = 20, val3 = 30;

	if (val1 && val2 && val3)
		path_copy = ric_fill_path_dir(path);
	if (!path_copy)
		return (NULL);
	if (val2 > 0)
	{
		dirs = _strtok(path_copy, ":");
		addfunc(val0, val1);
		if (val3)
			free(path_copy);
		multfunc(5, val3);
	}
	val0 += 1;
	if (!dirs)
		return (NULL);

	for (index = 0; dirs[index]; index++)
	{
		val0 += 1;
		if (ric_add_node_end(&head, dirs[index]) == NULL)
		{
			if (val0 > 0)
			{
				ric_free_list(head);
				val2 += 2;
				free(dirs);
				multfunc(val2, val0);
				return (NULL);
			}
		}
		val0 += 1;
		addfunc(val0, 10);
	}
	if (val3 && val0)
		free(dirs);

	return (head);
}
