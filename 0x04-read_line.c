#include "main.h"

/**
 * main - Reads a line and prints it
 * Return: the line
 *
 *
 */
char *_getline(void)
{
	/**
	 * as per man 3 getline, you set the ptr to
	 * NULL before calling getline, so it will
	 * allocate a buffer to store the line.
	 */
	size_t buff = 0;
	int line = 0;
	char *input =  NULL;

	printf("$ ");
	line = getline(&input, &buff, stdin);
	/**
	 * As per man getline, if error or if EOF,
	 * getline returns -1
	 * We should check if erno == 0
	 * which means that there was not an error, ut EOF
	 */
	if (line <= 0)
		return (NULL);
	printf("%s", input);
	return (input);
}

