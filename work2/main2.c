#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
#include <locale.h>

/*�������� ��������� ������� �����.��������� ���������� ����� � �����-
���� �� 1 �� 100 � ������������ ������ ������� ��� �� ���������� ����������
�������.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo1=0, chislo2=0;
	srand(time(0));
	chislo1 = rand() % 100 + 1;
	printf("�������� ������� �� �����!\n����� �����: ");
	for (;;)
	{
		scanf("%d", &chislo2);
		if (chislo1 > chislo2){
			printf("�� ����� ������!\n");}
		else if (chislo1 < chislo2){
			printf("�� ����� ������!\n");}
		else
		{
			printf("�� ������!!!\n");
			break;
		}
	}
	system("pause");
	return 0;
}