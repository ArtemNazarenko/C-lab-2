#include "task4.h"
#include <ctype.h>
#include <string.h>

char* process(char* line)
{
	int change, left = 0, right = strlen(line) - 1;  // -1: �.�. right - ��� ������ � ��������� � ����. '\0' � strlen �� �����������.
	while (left < right)
	{
		while (isalpha(line[left]))
			left++;
		change = line[left];
		while ((right > left) && (isdigit(line[right])))
			right--;
		line[left] = line[right];
		line[right] = change;
	}
	return line;
}