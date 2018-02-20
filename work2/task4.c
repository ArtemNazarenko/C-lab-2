#include <stdio.h>
#include <string.h>


char* process(char* line)
{
	int start = 0, end = strlen(line) - 1;

	for (int start = 0; start <= end; start++)
	{
		if (line[start] >= '0' && line[start] <= '9')
		{
			for (end = strlen(line) - 1; end > start; end--)
			{
				if (line[end] >= 'a' && line[end] <= 'z')
				{
					char buf = line[end];
					line[end] = line[start];
					line[start] = buf;
					break;
				}
			}
		}
	}
	return line;
}