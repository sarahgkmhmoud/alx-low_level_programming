#include"main.h"
/**
*read_textfile - reads a text file and prints it.
*@filename: pointer to point file name
*@letters: unsigned integers indicate to no. of letters in the file
*Return: (writes) always success.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	char *buff;
	ssize_t reads, writes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	reads = read(fd, buff, letters);
	writes = write(STDOUT_FILENO, buff, reads);

	free(buff);
	close(fd);
	return (writes);
}


