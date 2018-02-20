#include <stdio.h>

char * layout(char buf[], int line, int count)
{
	int space = count - line;
	int star = 2 * line - 1;

	for (int i = 0; i < space; i++)
		buf[i] = ' ';

	for (int i = 0; i < star; i++)
		buf[i + space] = '*';

	return buf;
}