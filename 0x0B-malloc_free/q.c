#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int cp(void)
{
    char *s;

    s = malloc(9);
    strcpy(s, "Holberton");
    printf("%s\n", s);
    return (0);
}
int main()
{
	cp();
	return 0;
}
