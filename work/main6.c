/*���������, ��������� ������ �� ������ ��������. ������� ��������� 
  ������� � ������ ������, � ����� ������ � ������� ����� �������,
  ���� �� ���������� ������ 1.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#include <string.h>
#define N 500

int main()
{
	char line[N];
	printf("Enter the string: \n");
	fgets(line, N, stdin);
	//line[N - 1] = '\0';  //�������� \n
	printf("\nCleaned out unwanted spaces string: \n");
	printf("%s \n\n", clear(line));
	//printf("%d \n",strlen(clear(line)));
	return 0;
}