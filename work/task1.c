#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight)
{
	float L = (G * currTime*currTime) / 2; // ���������� ���������� �� ����� currTime
	float h = startHeight - L;  //������� �������� ������
	return h;
}