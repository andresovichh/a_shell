#include "main.h"
/**
 * exit_cmd - Handles the exit command.
 * @command: Tokenized command.
 * @input: Input read from stin.
 * Return: Nothing.
 */
void exit_cmd(char **command, char *input)
{
	free(input);
	free_buffer(command);
	exit(0);
}
