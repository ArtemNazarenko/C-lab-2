/*���������, ������� ������� �� ����� 10 �������, ���������������
   ��������� ������� �� ��������� ���� � ����, ������ ����� ������������
   ��� � ������, ��� � � ������� ���������. ����� ������ - 8 ��������.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#include <time.h>

#define COUNT 10 //���-�� �������
#define LENGTH 8  //����� ������

int main()
{
	clock_t now; 
	srand(time(0));
	char line[LENGTH + 1];
	line[LENGTH] = '\0';
	int i = 1;  //�������� ������� ������ � ������ 1
	//puts(password(line));  //�������� ������
	while (i <= COUNT)
	{
		//now = clock();
		//while (clock() < now + CLOCKS_PER_SEC);
		puts(password(line));
		i++;
	}
	printf("\n");
	return 0;
}