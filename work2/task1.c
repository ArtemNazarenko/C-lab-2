#include <stdio.h>
#include <math.h>

float height(int currTime, int startHeight)
{
	const float g = 9.81;
	float udar = (g*pow(currTime, 2)) / 2.0;
	return startHeight - udar;
}




