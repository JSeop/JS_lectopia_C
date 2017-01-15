#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int input();
int output(int, int);
int random(int);
void myfflush();
int main()
{
	int num, win=0, draw=0, user, temp;
	srand((unsigned int)time(NULL));
	while (1) {
		num = random(3);
		user = input();
		temp=output(num, user);
		if (temp == 1)
			draw++;
		else if (temp == 2)
			win++;
		else {
			printf("���Ӱ�� : %d �� %d ��\n", win, draw);
			return 0;
		}
	}
	
}
int random(int n)
{
	int res;
	res = rand() % n + 1;
	return res;
}
int input()
{
	int user;
	while(1){
		printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &user);
		if(user ==1 || user == 2 || user == 3)
			return user;
	}
}
int output(int num, int user)
{
	if (num == 1 && user == 1) {
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		return 1;
	}
	else if (num == 1 && user == 2) {
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n");
		return 0;
	}
	else if (num == 1 && user == 3) {
		printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
		return 2;
	}
	else if (num == 2 && user == 1) {
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
		return 2;
	}
	else if (num == 2 && user == 2) {
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		return 1;
	}
	else if (num == 2 && user == 3) {
		printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n");
		return 0;
	}
	else if (num == 3 && user == 1) {
		printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ�.\n");
		return 0;
	}
	else if (num == 3 && user == 2) {
		printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n");
		return 2;
	}
	else if (num == 3 && user == 3) {
		printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
		return 1;
	}
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}