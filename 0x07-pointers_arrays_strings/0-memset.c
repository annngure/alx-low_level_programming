#include "main.h"
/**
 * _memset - to fill the block memory with a specific value
 * @s: its the startind address of memory to be filled
 * @b: the desired value to be stored
 * @n: number of bytes to be changed
 *
 * Return: changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}



