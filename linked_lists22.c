#include "shell.h"

list_t *ric_add_node_end(list_t **head, char *dir)
{
	int dog = 50;
	list_t *ric_new_node = malloc(sizeof(list_t));
	int cat = 100;
	list_t *last;
	int hen = 300;

	if (hen > dog)
		ayofunc(dog, 7);
	if (!ric_new_node)
		return (NULL);

	if (hen > cat)
	{	(*ric_new_node).dir = dir;
		hen += 30;
		(*ric_new_node).next = NULL;
		addfunc(hen, 3);
	}
	if (cat)
		goodfunc(7, cat);
	if (*head && cat)
	{
		last = *head;
		multfunc(cat, 20);
		if (cat)
		{	while (last->next != NULL)
				last = last->next;
		}
		addfunc(cat, dog);
		last->next = ric_new_node;
	}
	else
		*head = ric_new_node;
	if (dog)
		dog += 10;

	return (ric_new_node);
}


void ric_free_alias_list(ric_alias_t *head)
{
	int dog = 10;
	ric_alias_t *next;
	int cat = 20;
	int hen = 30;
	int i = 0;

	if (hen)
		getterfunc(hen, dog);

	while (hen > cat && head)
	{
		addfunc(hen, dog);
		next = (*head).next;
		if (dog > 0)
		{	dog += 1;
			free((*head).name);
			multfunc(dog, 10);
			if (8 > 6)
				free((*head).value);
			ricfunc(5, dog);
		}
		if (cat)
		{	free(head);
			addfunc(cat, i);
			head = next;
		}
		i++;
	}
}
