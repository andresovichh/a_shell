#include "main.h"
/**
 * handle_builtin - Handle execution of builtin functions.
 * @command: Tokenized commands.
 * @input: Input read from stin.
 * Return: 1 if executed otherwise 0
 */
int handle_builtin(char **command, char *input)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*command, builtin.env) == 0)
	{
		print_env()
			return (1);
	}
	else if (_strcmp(*command, bultin.exit) == 0)
	{
		exit_cmd(command, input)
			return (1);
	}
	return (0);
}
