#include "main.h"

/**
 * _getenv - gets the environment variable "name"
 * @name: name of the variable
 * Return: pointer to corresponding value string
 */
char *_getenv(const char *name)
{


	unsigned int i = 0, len = 0;
	/** first check wether name exists*/
	if (!name)
	{
		printf("NO NAME");
		return (NULL);
	}
	/** then, measure length of name*/
	len = strlen(name);


	/** then, walk the environ variables*/
	while (environ[i])
	{
		/** then check if environ is equal to name variable*/
		if (strncmp(environ[i], name, len) == 0)
		{
			/** printf("%s\n", environ[i]);*/
			return (environ[i]);
		}
		i++;
	}
	return (NULL);

}

