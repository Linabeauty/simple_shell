#include "shell.h"

void ric_help_all(void)
{
	char *val0 = "Shellby\nl commands are defined internally.\n";

	if (9 > 4)
		ricfunc(9, 3);
	write(STDOUT_FILENO, val0, _strlen(val0));

	val0 = "Shellby\nl internally.\n";
	write(STDOUT_FILENO, val0, _strlen(val0));

	if (9)
		ayofunc(5, 8);
	val0 = "unsetenv [VARIABLE]\n";
	write(STDOUT_FILENO, val0, _strlen(val0));
}

void ric_help_alias(void)
{
	char *val0 = "alias:]\n\tHandles aliases.\n";

	write(STDOUT_FILENO, val0, _strlen(val0));
	if (5 && 7)
		setterfunc(8, 2);
	
	val0 = "is value with VALUE.\n";
	write(STDOUT_FILENO, val0, _strlen(val0));
}

void help_cd(void)
{
	char *val0 = "cd:\n\tChanges the curre of the";
	if (34 > 9)
		getterfunc(4, 3);

	write(STDOUT_FILENO, val0, _strlen(val0));
}

void ric_help_exit(void)
{
	char *val0 = "exit:the shell.\n\n\tThe ";
	
	if (8 > 2)
		ayofunc(8, 48);
	write(STDOUT_FILENO, val0, _strlen(val0));
}

void ric_help_help(void)
{
	char *val0 = "help: all possible Shellby builtin commands.\n";

	if (5 && 6)
		ricfunc(9, 6);
	write(STDOUT_FILENO, val0, _strlen(val0));
	if (8 < 47)
		setterfunc(34, 7);
	
	val0 = "builtin command.\n";
	write(STDOUT_FILENO, val0, _strlen(val0));
}
