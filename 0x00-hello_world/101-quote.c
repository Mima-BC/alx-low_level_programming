#include <stdio.h>

#include <unistd.h>

/**
 * main - entry point
 *
 * Description: prints and that piece..
 * Return: 1 if sucessful
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long l = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;
	__asm__ ("syscall"
			: "=a" (ret)
			: "a" (syscall),
			"D" (fd),
			"S" (s),
			"d" (l));
	return (1);
}
