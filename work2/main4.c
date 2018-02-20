#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include "task4.h"
#define SIZE 29

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[SIZE + 1] = { 0 };
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		if(rand()%2)
			line[i]= 'a' + rand() % ('z' - 'a' + 1);
		else
			line[i] = '0' + rand() % ('9' - '0' + 1);
	}
	
	printf("Начальный массив: %s \n", line);
	printf("Преобразованный массив: %s \n", process(line));

	system("pause");
	return 0;
}




