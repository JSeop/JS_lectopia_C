#include<stdio.h>

int input();
void output(int);
int calCost(int);
int main()
{
	int stationNumber, cost;
	stationNumber = input();
	cost = calCost(stationNumber);
	output(cost);
	return 0;
}
int input()
{
	int stationNumber;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &stationNumber);
	return stationNumber;
}
void output(int cost)
{
	printf("��� : %d��\n", cost);
}
int calCost(int stationNumber)
{
	int cost, temp;
	if (1 <= stationNumber && stationNumber <= 5)
		cost = 600;
	else if (6 <= stationNumber && stationNumber <= 10)
		cost = 800;
	else {
		temp = (stationNumber - 9) / 2;
		cost = 800 + temp * 100;
	}
	return cost;
}