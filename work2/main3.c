#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "task3.h"
#include <time.h>
#define SIZE 100

/*�������� ���������, ��������� �� ����� ����������� �� ��������*/

int main()
{
	setlocale(LC_ALL, "Rus");
	int count, line;
	char buf[SIZE] = { 0 };
	
	printf("������� ������ ������: ");
	scanf("%d", &count);
	printf("���� ������:\n");
	
	for (int line = 1; line <= count; line++) 
		printf("%s\n", layout(buf, line, count));
	
	system("pause");
	return 0;
}