#include <unistd.>
/**
 * this is the _putchar.c
 */
int _putchar(char c)
{
	return write(stdout_fileno, &c, 1)
}
