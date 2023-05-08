#include "main.h"
/*Write a function that reads a text file and */
/*prints it to the POSIX standard output.*/
/**
 * read_textfile - Our function doin the comment above
 *
 * @filename: Our file name or path to filename
 * @letters: the number of letter to read
 *
 * Return: returns 0 for failure or number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *letter = (char *)malloc(letters);
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, letter, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, letter, bytes_read);
	if (bytes_written == -1 || bytes_written < bytes_read)
		return (0);
	close(fd);
	free(letter);
	return (bytes_written);
}
