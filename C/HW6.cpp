#include<stdio.h>

double input();
void output(double);
int main()
{
	double c, f;

	f = input();
	c = (double)5 / (double)9 * (f - 32);
	output(c);
	return 0;
}
double input()
{
	double f;
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%lf", &f);
	return f;
}
void output(double c)
{
	printf("���� �µ��� %.1lf �� �Դϴ�.\n", c);
}