/*��������� ������� �����. ��������� ���������� ����� � ��������� 
	�� 1 �� 100 � ������������ ������ ������� ��� �� ���������� 
	���������� �������.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	int value = -1;  //����� ������������
	int secret;  //���������� ����������� �����
	int enter;  //��� ���������� ������������� �������� scanf

	srand(time(0));
	secret = rand() % 100 + 1; //���������� ����������� �����
	//printf("The number is %d. \n\n", secret);  //�������� ����������� ����������� �����

	printf("Please, enter an integer in the range from 1 to 100: \n\n");
	enter = scanf("%d", &value);
	while (value <= 0 || value > 100 || enter == 0)
	{
		scanf("%*[^\n]"); 
		printf("\nEnter the correct value! \n");
		enter = scanf("%d", &value);
	}
	
	while (turn(value, secret) != 0)
	{
		if (turn(value, secret) > 0)
		{
			printf("Your number is MORE... Please, try again: \n\n");
			enter = scanf("%d", &value);
			while (value <= 0 || enter == 0)
			{
				scanf("%*[^\n]");
				printf("Enter the correct value! \n\n");
				enter = scanf("%d", &value);
			}
			
		}
		else
		{
			printf("Your number is LESS... Please, try again: \n\n");
			enter = scanf("%d", &value);
			while (value <= 0 || enter == 0)
			{
				scanf("%*[^\n]");
				printf("\nEnter the correct value! \n");
				enter = scanf("%d", &value);
			}
		}
	}
	printf("CONGRATULATE!!! You guessed it!!! \n\n");
	return 0;
}
