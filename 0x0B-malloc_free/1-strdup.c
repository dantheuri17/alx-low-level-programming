#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *cpy;
	int  i = 0;

	cpy = malloc(sizeof(str));

	while (str[i])
	{
		cpy[i] str[i];
		i++;
	}

	return (cpy);
}
