#include "main.h"

/**
 * main - prints one dir at a time
 * Return: a number
 *
 *
 */

int main(void)
{
	char *token;

	token = strtok(getenv("PATH"), "/");
	token = strtok(NULL, "/ :");
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, "/ :");
	}
	return (0);
}


