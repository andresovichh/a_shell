#include "main.h"
/**
 * _getenv2 -tion to get all env
 *@env: enviroment
 *Return: 0
 */

void _getenv2(char **env)
{
	size_t run = 0;

	while (env[run])
	{
		write(STDOUT_FILENO, env[run], strlen(env[run]));
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}
