#include "main.h"
/**
 *create_file - createa a file
 *@filename: name of the file
 *@text_content: text to be written
 *Return: if fail -1, success 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writeFile;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	writeFile = write(fd, text_content, strlen(text_content));
	close(fd);
	if (writeFile)
	{
		close(fd);
		return (1);
	}
	return (1);
}
