#include "main.h"
/*Write a function that appends text at the end of a file.*/
/**
 * append_text_to_file - Our function doing the comment above
 *
 * @filename: first parameter the filename or path to filename
 * @text_content: Our second parmeter or data in file
 *
 * Return: returns 1 for file existing or sucessfully appended
 * -1 for failure for not existing, filename as NULL and no permission given
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	/*after searching using open check if it exist*/
	/*and from the flag o_append if it does not exist*/
	/*return -1 as failure because append does not create*/
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		/*checks if the permission to write and not*/
		/*overwrite contents of file is available using write*/
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
