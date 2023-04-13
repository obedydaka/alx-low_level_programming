#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - This function appends text at the end to the  file
 * @filename: The filename to open and append
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dv, wv, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	dv = open(filename, O_RDWR | O_APPEND);
	if (dv < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(dv);
		return (1);
	}

	while (*(text_content + length))
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
