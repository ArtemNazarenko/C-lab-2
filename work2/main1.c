#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"



/*�������� ���������, ����������� ������ ���������� �����. ����� 
������ � ������ H, ������� �������� �������������.� �����
������ ������� ����� ������ ���������� ���������� �� �������
L = gt ^ 2 / 2, ��� g = 9.81 m / c
��������� ����� ����������� ��� � ������� � ������� �� ����� -
��� ������� �������� ������ ��� ������������ ����� h.*/

int main()
{
	int currTime = 0, startHeight = 0;
	float h = 0.0;
	clock_t now;
	printf("Enter start height: ");
	scanf("%d", &startHeight);
	for (;;)
	{
		h = height(currTime, startHeight);
		if (h <= 0)
		{
			printf("BABAH!!!\n");
			break;
		}

		printf("t=%d c h=%02.1f m\n", currTime, h);
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}
	system("pause");
	return 0;
}