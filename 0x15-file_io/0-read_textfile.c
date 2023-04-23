#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t num_read, num_written;
        char *buffer;
        int fd;

        if (filename == NULL)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);

        buffer = malloc(sizeof(char) * letters);
        if (buffer == NULL)
        {
                close(fd);
                return (0);
        }

        num_read = read(fd, buffer, letters);
        if (num_read == -1)
        {
                close(fd);
                free(buffer);
                return (0);
        }

        num_written = write(STDOUT_FILENO, buffer, num_read);
        if (num_written == -1 || num_written != num_read)
        {
                  close(fd);
                free(buffer);
                return (0);
        }

        close(fd);
        free(buffer);

        return (num_written);
}

