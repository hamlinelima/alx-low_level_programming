#include "main.h"
<<<<<<< HEAD

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: filename
 * @letters: numbers of letters it should read and print
 * Description: if filename is NULL || write fails or does not
 *      write the expected number of bytes return 0
 * Return: actual number of letters it could read and print
=======
/**
 * read_textfile - reads a file and prints it
 * @filename: const char*
 * @letters: size_t
 * Return: ssize_t
>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
<<<<<<< HEAD
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
=======
	int fd, r, w, c;
	char *buf;


	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1)
	{
		free(buf);
		return (0);
	}
	c = close(fd);
	if (c == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}

>>>>>>> 4b2412ad3cba3e7a4bab03a7d36c327a5f57e976
