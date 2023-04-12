#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - This function creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */

int create_file(const char *filename, char *text_content)
{
	int dv, wv;
	int  length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	dv = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (dv < 0)
	{
		return (-1);
	}

	while (text_content && *(text_content + length))
	{
		length++;
	}

	wv = write(dv, text_content, length);
	close(dv);
	if (wv < 0)
	{
		return (-1);
	}
	return (1);
}
