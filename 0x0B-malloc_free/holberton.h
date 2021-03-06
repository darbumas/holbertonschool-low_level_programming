#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int find_length(char *);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int word_count(char *, int);
char *copyMem(char *dest, char *src, unsigned int);
char *goat(char *, int *);
void free_list(char **list, int n);
#endif
