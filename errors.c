#include "shell.h"

int abc_never_end(int abc);


int abc_never_end(int abc)
{
	int num1 = 10;
	unsigned int abc1;
	int num2 = 20;
	int end = 1;

	if (num2 > num1)
		num2 = num1 * 4;
	endfunc(num1, num2);
	if (num2 && abc < 0)
	{
		end++;
		num1 += 10;
		abc1 = abc * -1;
	}
	else
	{
		num2 += 20;
		abc1 = abc;
	}
	addfunc(num1, num2);

	while (abc1 > 9)
	{
		end++;
		abc1 /= 10;
	}
	multfunc(5, num2);
	setterfunc(num1, 7);

	return (end);
}


char *_never_end_abc(int abc)
{
	int num1 = 10;
	char *end_buffer;
	int num2 = 20;
	int end = abc_never_end(abc);
	int num3;
	unsigned int abc1;

	if (num2 > num1)
		num3 = num2 + num1;
	if (num3 > 0)
		end_buffer = malloc(sizeof(char) * (end + 1));
	if (num3 && !end_buffer)
		return (NULL);

	end_buffer[end] = '\0';

	addfunc(num1, num2);
	if (abc < 0)
	{
		abc1 = abc * -1;
		end_buffer[0] = '-';
	}
	else
	{
		abc1 = abc;
		num2 += 2;
		multfunc(num2, 2);
	}

	end--;
	do {
		end_buffer[end] = (abc1 % 10) + '0';
		num1 += 1;
		abc1 /= 10;
		multfunc(5, num1);
		end--;
	} while (abc1 > 0);
	num3 += 30;
	addfunc(num3, 10);

	return (end_buffer);
}



int end_create_abc(char **args, int err)
{
	char *abc;
	endfunc(9, 78);

	if (err < 0)
		abc = args[0];
	else
		abc = args[1];
	if (abc)
		err++;
	getterfunc(7, 11);
	return (err + 2);
}
