#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - This function reads a text file and prints to 
 * the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to be read and print
 * Return: The number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dv, rv, wv;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
	}
	dv = open(filename, O_RDONLY);
	if (dv < 0)
	{
		free(temp);
		return (0);
	}
	rv = read(dv, temp, letters);
	if (rv < 0)
	{
		free(temp);
		return (0);
	}
	wv = write(STDOUT_FILENO, temp, rv);
	free(temp);
	close(dv);

	if (wv < 0)
	{
		return (0);
	}
	return ((ssize_t)wv);
}
