#include "main.c"
/**
 * print_env - Prints the enviroment string to stdout
 * Return: 0
 */
void print_env(void)
{
	int i = 0;
	char **_env = enviroment;

	while (_env[i])
	{
		write(STDOUT_FILENO, (const void *)_env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
