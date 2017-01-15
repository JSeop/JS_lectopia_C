#include<stdio.h>
int input(char *, int);
double cal(int, int);
void output(double,int,int);
void myfflush();

int main()
{
	int userCode, total, num;
	double cost;
	userCode = input("사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ",num=0);
	total = input("사용량을 입력하시오(ton단위) : ",num=1);
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
		printf("\n# 사용코드 : %d(가정용)\n", userCode);
		break;
	case 2:
		printf("\n# 사용코드 : %d(상업용)\n", userCode);
		break;
	case 3:
		printf("\n# 사용코드 : %d(공업용)\n", userCode);
		break;
	}
	printf("# 사용량 : %d ton\n", total);
	printf("# 총수도 요금 : %.1lf원\n", cost);   // 1톤 사용시 세금 계산할 경우 소수점 나오기 때문에 실수형으로 처리함.
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