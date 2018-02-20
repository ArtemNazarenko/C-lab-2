#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100
#define N 26

int main()
{
	int i;
	char buf[SIZE];
	int count[N] = {0};
	srand(time(0));
	int max = 0, min = 0;

    for (i = 0; i < SIZE; i++)
	   buf[i]= rand() % ('Z' - 'A' + 1) + 'A';
	buf[SIZE - 1] = '\0';
	puts(buf);

	i = 0;
		while (buf[i] != '\0')
		{
			count[buf[i] - 'A']++;
				i++;
		}

		for (i = 0; i < N; i++)
		{
			if (count[i]>max)
				max = count[i];
			if (count[i]<min)
				min = count[i];
			if (count[i] > 0)
				printf("%c-%d\n", i + 'A', count[i]);
		}
			printf("Max chastota: %d\n", max);
			printf("Min chastota: %d\n", min);
			for (i = 0; i< N; i++)
			{
				if (count[i] == max)
					printf("%c-%d\n", i + 'A', count[i]);
				if (count[i] == min)
					printf("%c-%d\n", i + 'A', count[i]);
			}
 return 0;
}

