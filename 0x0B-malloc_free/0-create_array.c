#include "main.h"
#include <stdlib.h>
/**
 * cretae_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: This function dynamically allocates memory for an array of characters with a specified size and initializes all elements with the provided character 'c'.
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
