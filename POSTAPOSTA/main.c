#include "main.h"

/**
 * main - main function for the shell project
 * Return: Always 0
 *
 */
int main(void)
{
	int i = 0;
	char str[] = "hello/ :world /good: bye";
	char **toks;

	toks = tokenizer(str);
	while (toks[i])
	{
		printf("%s\n", toks[i++]);
	}
	return (0);
}
