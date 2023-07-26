#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates a string
 * @dest: destination
 * @src: source
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	/**int d_len, s_len;

	d_len = strlen(dest);
	s_len = strlen(src);
	*/
	strcat(dest, src);
	printf("%s", dest);
	return (dest);
}
	
	/**for (i = 0; i < src[i]; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);*/

