#include<stdio.h>

int input();
void myfflush();
int main()
{
	int num, i = 0;
	printf("# 정수값을 입력하세요 : ");
	num = input();
	while (i<num) {
		if (i % 5 == 0 && i != 0)
			printf("\n");
		printf("*");
		i++;
	}
	printf("\n");
	return 0;
}
int input()
{
	int num;
	while (scanf("%d", &num) != 1) {
		printf("# 정수값을 입력하세요 : ");
		myfflush();
	}
	return num;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}