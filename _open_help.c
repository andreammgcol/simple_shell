#include "shell.h"

/**
 * _open_help - Opens the Holberton Shell help
 *
 * Return: Nothing to returns
 */
void _open_help(void)
{
	_puts("\n***WELCOME TO THE SHELL HELP***"
		"\nList of Commands supported:"
		"\n>cd"
		"\n>ls"
		"\n>pwd"
		"\n>cat"
		"\n>exit");
}
