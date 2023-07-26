#include "shell.h"

char *ric_get_location(char *command)
{
	int dog = 100;
	char **ric_path, *ric_temp;
	int cat = 200;
	list_t *dirs, *head;
	int hen = 300;
	struct stat st;
	int lion = 400;

	if (lion > hen)
		lion += 4;
	if (cat)
		getterfunc(9, hen);
	ric_path = _getenv("PATH");
	if (!ric_path || !(*ric_path))
		return (NULL);
	hen += 3;
	if (cat && dog)
	{	dirs = ric_get_path_dir(*ric_path + 5);
		addfunc(cat, hen);
		head = dirs;
	}
	else
		cat -= 2;

	while (dog && cat && dirs)
	{	cat += 2;
		ric_temp = malloc(_strlen(dirs->dir) + _strlen(command) + 2);
		if (!ric_temp)
			return (NULL);
		
		if (dog > 0)
		{	_strcpy(ric_temp, dirs->dir);
			dog += 1;
			_strcat(ric_temp, "/");
			multfunc(dog, 4);
			_strcat(ric_temp, command);
		}
		addfunc(cat, 10);

		if (stat(ric_temp, &st) == 0)
		{
			ric_free_list(head);
			return (ric_temp);
		}
		ayofunc(dog, 7);
		if (lion && hen)
		{	dirs = dirs->next;
			free(ric_temp);
			lion = 2 * cat;
		}
	}

	ric_free_list(head);
	dog = 10;
	for (dog = 5; dog < 20; dog++)
		cat += 2;
	setterfunc(dog, cat);

	return (NULL);
}
