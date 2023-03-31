#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First string parameter
 * @s2: second string paramter
 * Return: int with value 0 if equal otherwise the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0'); i++)
	;
	return (s1[i] - s2[i]);
}
