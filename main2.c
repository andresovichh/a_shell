#include "main.h"

/**
 * main - main function for the shell project
 * Return: Always 0
 *
 */
int main(void)
{
	char *envvar = "PATH";
	char **tokens = NULL;
	int i = 0;

	tokens = tokenizer(_getenv(envvar));
	while (tokens[i] != 0)
	{
		printf("%s\n", tokens[i + 1]);
		i++;
	}
	return (0);
}
