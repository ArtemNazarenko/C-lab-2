#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

char * clear(char * line)
{
	int len = (int)strlen(line);
	int i = 0;
	int j = 0;
	for (int i=0; i < len; i++)
	{
		if ((line[i] == ' ' && line[i + 1] == ' ') || (line[i] == ' ' && line[i + 1] == '\0'))
		{
			for (j = i; j < len; j++)
				line[j] = line[j + 1];
			i = i - 1;
			line[len--] = '\0';
		}
	}
	
	if (line[0] == ' ')
	{
		for (j = 0; j < len; j++)
			line[j] = line[j + 1];  
		line[len] = '\0';
	}
	
	return line;
}