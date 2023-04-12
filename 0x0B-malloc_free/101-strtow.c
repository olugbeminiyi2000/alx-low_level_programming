#include "main.h"
/*a function that splits a string into words.*/
/**
 * word_len - locates the index marking the end of the 
 * first word contained within the a string
 * @str: the string to be searched
 * Returnr: the index marking the end of the  initial word pointed to
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words contained within a string.
 * @str: the string to be searched
 * Return: the number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
	{
		len++;
	}
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
}

#include "main.h"
/*a function that splits a string into words.*/
/**
 * strtow - function
 * @str: parameter
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	char **string;
	int index = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	{
		return (NULL);
	}
}
