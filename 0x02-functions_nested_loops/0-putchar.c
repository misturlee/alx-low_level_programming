#include <unistd.h>
#include <stdio.h>

/**
 * main - writes the putchar to the screen
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	write("_putchar\n");
	return (0);
}
