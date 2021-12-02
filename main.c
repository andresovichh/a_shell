#include "main.h"

/**
 * main - main function for the shell project
 * Return: Always 0
 *
 */
int main(void)
{
	int i = 0, j = 0;
	char **toks  = NULL, **tokens = NULL;
	char *input;
	int status = 1;

	while (status)
	{
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
			free(input);
			return (1);
		}
		toks = tokenizer(input);
		while (toks[i])
		{
			printf("position:%d string:%s\n", i, toks[i]);
			/** this should check if user types exit*/
			if (strcmp(toks[i], "exit") == 0)
			{
				printf("You typedd exit\n");
				status = 0;
			}
			if (strcmp(toks[i], "PATH") == 0)
			{
				tokens = path_tokenizer(_getenv(input));
				/**
				 * toks = holds what the user wrote
				 * tokens = holds whatever is in PATH
				 *
				 * _execute_nobuiltin(tokens, toks);
				 */
				while (tokens[j] != 0)
				{
					printf("%s\n", tokens[j]);
					j++;
				}
			}
				i++;
		}
		i = 0;
	}
	printf("REACHEd WHILE\n");
	free(input);
	free(toks);

	return (0);
}
