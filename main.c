#include "main.h"

/**
 * main - main function for the shell project
 * Return: Always 0
 *
 */
int main(void)
{
	int i = 0;
	char **toks;
	char *input;
	int status;

	do {
		input = _getline();
		/** by checking if errrno == 0, we conclude it was EOF*/
		if (input == NULL && errno == 0)
		{
			printf("CTRLD\n");
			free(input);
			return (0);
		}
		else if (input == NULL && errno != 0)
		{
			printf("Some error occurred");
			return (1);
		}
		toks = tokenizer(input);
		while (toks[i])
		{
			/** this should check if user types exit*/
			if (strcmp(toks[i], "ls") == 0)
			{
				printf("I received ls");
				status = 0;
			}
			printf("position:%d string:%s\n", i, toks[i]);
			if (strcmp(toks[i], "gout") == 0)
			{
				status = 0;
			}
			i++;
		}
	} while (status);
	free(input);
	free(toks);

	return (0);
}
