#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: argument for array
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *my_array;
	int i;
int j;

	my_array = malloc(sizeof(str));

	i = 0;
j = 0;
	while (str[i] != '\0')
	{
		j++;
		i++;
	}

	if (my_array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		my_array[i] = str[i];
		i++;
	}

	return (my_array);
}
