#include<stdio.h>

int input();
void myfflush();
int main()
{
	int weight, count = 0;
	while (1) {
		printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
		weight = input();
		if (150 <= weight && weight <= 500)
			printf("* ���� �ް��� �� : %d\n", ++count);
		else if (weight < 150)
			printf("���߸��� ������ �峭���� ���ÿ�~ ^^\n");
		else if (500 < weight)
			printf("Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
		if (count == 10) {
			printf("*** �ް� ������ �������ϴ�.\n");
			return 0;
		}
	}
}
int input()
{
	int weight;
	while (scanf("%d", &weight) != 1) {
		printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
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