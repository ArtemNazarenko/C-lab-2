/*���������, ����������� ������ ���������� �����. ����� 
   ������ � ������ H, ������� �������� �������������. � �����
   ������ ������� ����� ������ ���������� ���������� �� �������
   L = gt^2/2, ��� g = 9.81 m/c
   ��������� ����� ����������� ��� � ������� � ������� �� ��������
   ������� �������� ������ ��� ������������ ����� h.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	float startHeight = -1.0f; //��������� ������
	int currTime = 0; //������� ������� �������, ��� ������� ������ ������
	clock_t now;

	printf("Enter the starting height: \n");
	scanf("%f", &startHeight);
	printf("\n");

	if (startHeight <= 0)
	{
		printf("Enter the correct value of the starting height!");
		return 1;
	}
	else
	{
		while ((height(currTime, startHeight)) > 0)
		{
			printf("t = %02d s.\t""h = %06.1f m. \n", currTime, height(currTime, startHeight));
			currTime++;
			now = clock();
			while (clock() <= now + CLOCKS_PER_SEC)
				;
		}
		printf("BABAH!!! \n\n");
		return 0;
	}
}