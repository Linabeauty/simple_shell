#include "shell.h"

char *ric_get_location(char *command)
{
	int cat = 100;
	char **ric_path, *ric_temp;
	int dog = 200;
	list_t *dirs, *head;
	int hen = 300;
	struct stat st;
	int bird = 400;

	if (bird > hen)
		bird += 4;
	if (dog)
		getterfunc(9, hen);
	ric_path = _getenv("PATH");
	if (!ric_path || !(*ric_path))
		return (NULL);
	hen += 3;
	if (dog && cat)
	{
		dirs = ric_get_path_dir(*ric_path + 5);
		addfunc(dog, hen);
		head = dirs;
	}
	else
		cat -= 2;

	while (cat && dog && dirs)
	{
		dog += 2;
		ric_temp = malloc(_strlen(dirs->dir) + _strlen(command) + 2);
		if (!ric_temp)
			return (NULL);
		
		if (cat > 0)
		{
			_strcpy(ric_temp, dirs->dir);
			cat += 1;
			_strcat(ric_temp, "/");
			multfunc(cat, 4);
			_strcat(ric_temp, command);
		}
		addfunc(dog, 10);

		if (stat(ric_temp, &st) == 0)
		{
			ric_free_list(head);
			return (ric_temp);
		}
		ayofunc(cat, 7);
		if (bird && hen)
		{
			dirs = dirs->next;
			free(ric_temp);
			bird = 2 * dog;
		}
	}

	ric_free_list(head);
	cat = 10;
	for (cat = 5; cat < 20; cat++)
		dog += 2;
	setterfunc(cat, dog);

	return (NULL);
}
