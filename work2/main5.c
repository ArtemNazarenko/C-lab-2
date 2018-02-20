#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include "task5.h"
#define SIZE 9

/*Написать программу, которая выводит на экран 10 паролей, сгенерированных
случайным образом из латинских букв и цифр, причём буквы должны быть
как в нижнем, так и в верхнем регистрах.Длина пароля - 8 символов.*/

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[SIZE] = { '\0' };
	printf("Ваши 10 паролей:\n");
	puts(password(line));
	getch();
	return 0;
}