#include "main.h"

/**
<<<<<<< HEAD
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if no required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;
=======
 * append_text_to_file - append text at the end of a file
 * @filename: char
 * @text_content: char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

<<<<<<< HEAD
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
=======
	if (!text_content && fd == -1)
		return (-1);

	else if (fd == -1)
		return (-1);

	else if (!text_content)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;
	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);


>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
}
