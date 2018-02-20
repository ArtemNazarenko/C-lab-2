#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "task3.h"
#include <time.h>
#define SIZE 100

/*Написать программу, выводящую на экран треугольник из звёздочек*/

int main()
{
	setlocale(LC_ALL, "Rus");
	int count, line;
	char buf[SIZE] = { 0 };
	
	printf("Введите высоту елочки: ");
	scanf("%d", &count);
	printf("Ваша елочка:\n");
	
	for (int line = 1; line <= count; line++) 
		printf("%s\n", layout(buf, line, count));
	
	system("pause");
	return 0;
}