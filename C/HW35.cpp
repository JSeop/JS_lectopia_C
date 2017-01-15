#include<stdio.h>
int input(char *, int);
double cal(int, int);
void output(double,int,int);
void myfflush();

int main()
{
	int userCode, total, num;
	double cost;
	userCode = input("����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ",num=0);
	total = input("��뷮�� �Է��Ͻÿ�(ton����) : ",num=1);
	cost = cal(userCode, total);
	output(cost, userCode, total);
	return 0;
}
double cal(int userCode, int total)
{
	int a = 50, b = 45, c = 30;
	double tax = 0.05;
	switch (userCode)
	{
		case 1:
			total*=a;
			break;
		case 2:
			total*=b;
			break;
		case 3:
			total*=c;
			break;
	}
	return (double)total + (double)total*tax;
}
void output(double cost, int userCode, int total)
{
	switch (userCode)
	{
	case 1:
		printf("\n# ����ڵ� : %d(������)\n", userCode);
		break;
	case 2:
		printf("\n# ����ڵ� : %d(�����)\n", userCode);
		break;
	case 3:
		printf("\n# ����ڵ� : %d(������)\n", userCode);
		break;
	}
	printf("# ��뷮 : %d ton\n", total);
	printf("# �Ѽ��� ��� : %.1lf��\n", cost);   // 1�� ���� ���� ����� ��� �Ҽ��� ������ ������ �Ǽ������� ó����.
}
int input(char * message,int separate)
{
	int num;
	while (1) {
		printf(message);
		scanf("%d", &num);
		if (separate == 0) {
			if (0 < num && num <= 3 && getchar() == '\n')
				return num;
		}
		else {
			if (0 < num && getchar() == '\n')
				return num;
		}
		myfflush();
	}
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}