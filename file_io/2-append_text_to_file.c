#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure. Does not create the file if it does
 * not exist. If filename is NULL, return -1. If text_content is NULL, do not
 * add anything to the file, return 1 if the file exists and -1 if the file
 * does not exist or if you do not have the required permissions to write the
 * file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status;
	ssize_t n_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n_written = 0; text_content[n_written]; n_written++)
			;

		status = write(fd, text_content, n_written);
		if (status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
