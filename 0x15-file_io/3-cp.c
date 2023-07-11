#include"main.h"
/**
 *main - Entry Point
 *@argv: array of strings
 *@argc: number of memebers
 *Return: 0 always success
*/
int main(int argc, char **argv)
{

	int fd1, fd2, r, w;
	char *buff;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp %s %s", argv[1], argv[2]);
	exit(97);
	}

	buff = _creatbuff(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buff, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r)
	{
		if (fd1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s", argv[1]);
		free(buff);
		exit(98);
	}
		w = write(fd2, buff, r);

		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fd1, buff, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buff);
	_close(fd1);
	_close(fd2);
	return (0);
}

/**
 *_close - for close the file
 *@fd: file descriptor
 *
 */

	void _close(int fd)
	{
		int fd_val;

		fd_val = close(fd);
		if (fd_val == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
			exit(100);
		}
	}

/**
 *_creatbuff - creat buffer
 *@filename: as string
 *Return: buff always success
 */
	char *_creatbuff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char *) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", filename);
	exit(99);
	}
	return (buff);
}
