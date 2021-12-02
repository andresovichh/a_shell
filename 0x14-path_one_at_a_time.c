#include "main.h"

/**
 * main - prints one dir at a time
 * Return: a number
 *
 *
 */

char *_getenv(const char *env)
{
	char *token;


	token = strtok(_getenv(env), "/ :");
	while (token)
	{

		/** printf("%s\n", token);*/
		token = strtok(NULL, "/ :");
	}
	return (0);
}


