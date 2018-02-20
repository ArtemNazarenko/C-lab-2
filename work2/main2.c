#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
#include <locale.h>

/*Написать программу ”Угадай число”.Программа задумывает число в диапа-
зоне от 1 до 100 и пользователь должен угадать его за наименьшее количество
попыток.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo1=0, chislo2=0;
	srand(time(0));
	chislo1 = rand() % 100 + 1;
	printf("Попробуй угадать моё число!\nВведи число: ");
	for (;;)
	{
		scanf("%d", &chislo2);
		if (chislo1 > chislo2){
			printf("Моё число больше!\n");}
		else if (chislo1 < chislo2){
			printf("Моё число меньше!\n");}
		else
		{
			printf("Ты угадал!!!\n");
			break;
		}
	}
	system("pause");
	return 0;
}