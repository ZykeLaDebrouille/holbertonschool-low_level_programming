#include "main.h"
#include <stdio.h>

/**
 * _strcpy - string copy
 *@dest: destination de la copie
 *@src: source de la copie
 * Return: Always dest(ination) string.
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
*dest = '\0';
return (start);
}
