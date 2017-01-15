#include<stdio.h>

int input();
void myfflush();
int main()
{
	int weight, count = 0;
	while (1) {
		printf("계란의 무게를 입력하세요(단위 : g) : ");
		weight = input();
		if (150 <= weight && weight <= 500)
			printf("* 현재 달걀의 수 : %d\n", ++count);
		else if (weight < 150)
			printf("메추리알 가지고 장난하지 마시오~ ^^\n");
		else if (500 < weight)
			printf("타조알 가지고 장난하지 마시오~ ^^\n");
		if (count == 10) {
			printf("*** 달걀 포장이 끝났습니다.\n");
			return 0;
		}
	}
}
int input()
{
	int weight;
	while (scanf("%d", &weight) != 1) {
		printf("계란의 무게를 입력하세요(단위 : g) : ");
		myfflush();
	}
	return weight;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}