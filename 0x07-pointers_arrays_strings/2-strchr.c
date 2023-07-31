#include "main.h"
/**
 * _strchr - locates a string
 * @s: a string
 * @c: a character
 * Return: returns a string
 */
char *_strchr(char *s, char c)
{
	if(c != '\0')
	{
		 s = s - c;
	}
	return (s);
}
