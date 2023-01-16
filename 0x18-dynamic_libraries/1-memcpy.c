#include "main.h"

/**
 * _memcpy - copy Memory
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memoryrea to copy
 * Return: memory area fill
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
