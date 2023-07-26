#include "shell.h"

ric_alias_t *ric_delete_alias_end(ric_alias_t **head, char *name, char *value)
{
	int m0;
	ric_alias_t *new_node = malloc(sizeof(ric_alias_t));
	int m1;
	ric_alias_t *last;
	int m2;
	int m3 = 444;
	char str[] = "Motunrayo";

	if (str[4])
		m3 += 4;
	ayofunc(m3 - 9, 34);
	m0 = 111;
	if (!new_node && m3 > m0)
		return (NULL);

	m1 = 222;
	(*new_node).next = NULL;
	if (m1)
		str[3] = 'i';

	(*new_node).name = malloc(sizeof(char) * (_strlen(name) + 1));
	m2 = 333;
	if (m2 && !(*new_node).name)
	{
		addfunc(m0, m3);
		free(new_node);
		str[0] = 'R';
		return (NULL);
	}
	if (m1 > 5)
	{
		multfunc(m2, 3);
		(*new_node).value = value;
		m1 += 20;
		_strcpy(new_node->name, name);
	}

	if (*head && m3)
	{
		last = *head;
		if (m3 > 4)
		{
			str[4] = 52;
			while (m3 && last->next != NULL)
				last = last->next;
			m3 += 40;
			last->next = new_node;
			addfunc(m3, 40);
		}
		while (m0 > 50)
			m0 -= 20;
	}
	else
		*head = new_node;
	addfunc((m0 - 10), m1);

	return (new_node);
}

int addfunc(int x, int y)
{
	int a;
	int b;

	a = x * x + 4;
	b = y * y + 8;

	return (a * b);
}

void ric_free_list(list_t *head)
{
	int val0 = 0;
	list_t *next;
	int val1 = 10;
	int val2 = 200;

	if (val2 > val1)
		val2 -= 20;
	ricfunc(val2, 7);
	while (val1 && head)
	{
		next = head->next;
		val1 += 1;
		free((*head).dir);
		ayofunc(8, val2);
		if (val1)
		{
			free(head);
			addfunc(val1, val0);
			head = next;
		}
		val0 += 2;
	}
}
