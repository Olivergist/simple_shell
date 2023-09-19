#include "main.h"

/**
 * read_line - fgets functions to file
 * @lineptr: Pointer to a character
 * Return: lineptr
 */

char *read_line(char *lineptr)
{
	ssize_t status;
	size_t n = sizeof(size_t) * 1024;

	status = getline(&lineptr, &n, stdin);
	if (status == -1)
	{
		free(lineptr);
		exit(EXIT_SUCCESS);
	}

	lineptr[custom_strlen(lineptr) - 1] = '\0';

	return (lineptr);
}
