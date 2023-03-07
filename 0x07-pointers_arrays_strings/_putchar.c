#include "main.s"
#include <uinstd.h>

/**
 * _putchar - its used to write the character c to stdout
 * @c: The character to print 
 *
 * Return: 0  (success).
 * On error, -1 is returned , and  error is set appropriately.
 */
int _putchar(char 1)
{
	return(write(1,&c,1));
}
