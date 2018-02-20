#include <stdio.h>
#include <time.h>
#define SIZE 9

char *password(char *line)
{
	srand(time(0));
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE-1; i++)
		{
			if (rand() % 3 == 1)
				line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			else if (rand() % 3 == 0)
				line[i] = rand() % ('z' - 'a' + 1) + 'a';
			else
				line[i] = rand() % ('9' - '0' + 1) + '0';
		}
		printf("%s\n", line);
	}
	return line-1;
}