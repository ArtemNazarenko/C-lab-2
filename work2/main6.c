#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "task6.h"
#define SIZE 256

/*�������� ���������, ��������� ������ �� ������ ��������.������� ��� -
������ ������� � ������ ������, � ����� ������ � ������� ����� �������,
���� �� ���������� ������ 1.
� ������ ��������� ��������� ��������� �������������� �������, 
�� ���� ���������� ���������� � �������� ������. ����� ���������� ��������� �������� �� �����.*/

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[SIZE] = { 0 };
	printf("������� �����:\n");
	scanf("%s", line);
	printf("��������������� �����:\n");
	puts(clear(line));
	system("pause");
	return 0;
}