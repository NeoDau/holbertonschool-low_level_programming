#include "main.h"
/**
 *append_text_to_file - function appends text to the end of a file
 *@filename: the name of the file
 *@text_content: the text of the file
 *Return: 1 on success, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int len = 0;

	for (; text_content[len]; len++)
	{}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		write(STDOUT_FILENO "fails", 5);
		return (-1);
	}
	close(fd);
	return (1);

}
