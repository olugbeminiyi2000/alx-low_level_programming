#include "main.h"
/*Create a function that creates a file.*/
/**
 * create_file - Our function that does what is commented above
 *
 * @filename: first parmeter for my file name
 * @text_content: data stored into the file
 *
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
