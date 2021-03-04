#include "holberton.h"

char **strtow(char *str)
{
	char **strings;
	int words, i, j, *db;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str, 0);
	if (words == 0)
	return (NULL);

	strings = (char **)malloc((words + 1) * sizeof(char *));
	if (strings == NULL)
	return (NULL);

	db = &j;
	*db = 0;
	for (i = 0; i < words; i++)
	{
		str = goat(str, db);
		strings[i] = (char *)malloc((*db + 1) * sizeof(char));
		if (strings[i] == NULL)
		{
			free_list(strings, i);
			return (NULL);
		}
		strings[i] = copyMem(strings[i], str, *db);
		strings[i][*db] = '\0';
		str = str + *db;
		*db = 0;
	}
	strings[i] = NULL;
	return (strings);
}

int word_count(char *str, int count)
{
	if (*str != '\0')
	{
		if (count == 0 && *str != ' ')
			return (1 + word_count(str + 1, count + 1));
		if (*str == ' ')
			return (word_count(str + 1, count + 1));
		if (*(str - 1) == ' ' && *str != ' ')
			return (1 + word_count(str + 1, count + 1));
		if (*str != ' ')
			return (word_count(str + 1, count + 1));
	}
	return (0);
}

char *goat(char *str, int *top)
{
	int i = 0;

	while (str[i])
	{
		if (*str == ' ' && i == 0)
		{
			str++;
			continue;
		}
		if (str[i] != ' ')
			i++;
		else
			break;
	}
	*top = i;
	return (str);
}

char *copyMem(char *dest, char *src, unsigned int d)
{
	unsigned int i = 0;

	while (i < d)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void free_list(char **list, int n)
{
    int i;

    for (i = 0; i < n; i++)
    free(list[i]);
    free(list);
}
