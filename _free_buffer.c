#include "main.h"
/**
 * free_buffer - Free buffers for BETTY
 * @buffer: Buffer to be free
 * Return: Nothing
 */
void free_buffer(char **buffer)
{
	int i = 0;

	if (!buffer || buffer == NULL)
		return;
	while (buffer[i])
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
}
