#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include "task5.h"
#define SIZE 9

/*�������� ���������, ������� ������� �� ����� 10 �������, ���������������
��������� ������� �� ��������� ���� � ����, ������ ����� ������ ����
��� � ������, ��� � � ������� ���������.����� ������ - 8 ��������.*/

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[SIZE] = { '\0' };
	printf("���� 10 �������:\n");
	puts(password(line));
	getch();
	return 0;
}