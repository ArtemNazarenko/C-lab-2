#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "task6.h"
#define SIZE 256

/*Написать программу, очищающую строку от лишних пробелов.Лишними счи -
таются пробелы в начале строки, в конце строки и пробелы между словами,
если их количество больше 1.
В данной программе запрещёно создавать дополнительные массивы, 
то есть необходимо стремиться к экономии памяти. Время выполнения программы значения не имеет.*/

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[SIZE] = { 0 };
	printf("Введите текст:\n");
	scanf("%s", line);
	printf("Преобразованный текст:\n");
	puts(clear(line));
	system("pause");
	return 0;
}