#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int);
int input();
void output(int, int, int, int);
void myfflush();
int main()
{
	int num, ans, count=0,min=0,max=100;
	srand((unsigned int)time(NULL));
	num = random(100);
	while (1)
	{
		ans = input();
		count++;
		if (num == ans) {
			printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d ��° ���� ���߼̽��ϴ�.\n", count);
			return 0;
		}
		else if (ans < num) {
			if (ans>min)
				min = ans;
			output(num, ans, max, min);
		}
		else {
			if (ans<max)
				max = ans;
			output(num, ans, max, min);
		}
	}
}
int random(int n)
{
	int res;
	return res=rand() % n + 1;
}
int input()
{
	int ans;
	while (1) {
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &ans);
		myfflush();
		if (0 <= ans && ans <= 100)
			return ans;
	}
}
void output(int num, int ans, int max, int min)
{
	if (ans < num) 
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
	else 
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}