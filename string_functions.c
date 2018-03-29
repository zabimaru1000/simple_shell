#include "shell.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
/**
 * _strdup - duplicates a string in newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate_string;
	int string_length, i;

	if (str == NULL)
		return (NULL);
	string_length = _strlen(str);
	duplicate_string = malloc(sizeof(char) * string_length + 1);
	if (duplicate_string == NULL)
		return (NULL);
	for (i = 0; i < string_length; i++)
	{
		duplicate_string[i] = str[i];
	}
	duplicate_string[i] = '\0';
	return (duplicate_string);
}
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: returns the result of _strcmp
 */
int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
