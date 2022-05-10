#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int size;
	
	size = malloc(sizeof(s1) + sizeof(s2));

	for (i = 0; s2[i] != 0; i++)
	{
		s1[i] = s2[i];
		size++;
	}

	return (s1);
}
