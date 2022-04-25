#include "main.h"
#include <stdlib.h>
/**
 *_strcpy - This is main function for copying the files
 *@dest: this is where to copy the string
 *@src: source where the string is copied from.
 *Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
