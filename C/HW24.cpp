#include<stdio.h>

int input();
void output(int, int);
int calDate(int);
int main()
{
	int depth, date;
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
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
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", depthM, date);
}