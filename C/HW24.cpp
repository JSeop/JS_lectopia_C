#include<stdio.h>

int input();
void output(int, int);
int calDate(int);
int main()
{
	int depth, date;
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	depth=input();
	date=calDate(depth);
	output(depth,date);
	return 0;
}
int input()
{
	int depth;
	scanf("%d", &depth);
	return depth;
}
int calDate(int depth)
{
	int date=0, up=50, down=20, location=0;
	if (depth == location)
		return date;
	while (1)
	{
		date++;
		location += up;
		if (depth <= location)
			return date;
		location -= down;
	}
}
void output(int depth, int date)
{
	double depthM;
	depthM = (double)depth / 100;
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", depthM, date);
}