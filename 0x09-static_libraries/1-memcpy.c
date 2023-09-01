#include "main.h"
/**
*_memcpy - a function that copies memory area
*@dest: memory where data is stored
*@src: memory from where data is copied
*@n: number of bytes to copy
*
* Return:pointer to the destination memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
