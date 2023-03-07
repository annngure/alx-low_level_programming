#include "main.h"
/**
 * _memcpy - function used to copy memory area
 * @dest: memory where is stored
 * @src: memory where data is copied
 * *@n: number of bytes present
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int x = n;

	for (; a < x; a++)
	{
		dest[a] = sr[a];
		n--;
	}
	return (dest);
}

