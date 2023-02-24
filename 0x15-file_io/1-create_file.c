#include "main.h"

/**
<<<<<<< HEAD
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writen in the file.
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;
=======
 *create_file - creates a file
 *@filename: name of the file
 *@text_content: contents
 *Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, x;
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976

	if (!filename)
		return (-1);

<<<<<<< HEAD
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

=======
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
	if (fd == -1)
		return (-1);

	if (!text_content)
<<<<<<< HEAD
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

=======
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	x = write(fd, text_content, len);
	if (x == -1)
		return (-1);

	close(fd);
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
	return (1);
}
