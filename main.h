#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#define BUFFER 1024
int _execute_nobuiltin(char **pathname, char **arguments);
char **path_tokenizer(char *string);
char *_getenv(const char *name);
extern char **environ;
int **cmd_to_av(char *input_string);
char **tokenizer(char *string);
char *_getline(void);
void _getenv2(char **env);
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
    	unsigned int len;
    	struct list_s *next;
} list_t;


#endif
