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
			printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", count);
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
		printf("# 숫자를 입력하시오 : ");
		scanf("%d", &ans);
		myfflush();
		if (0 <= ans && ans <= 100)
			return ans;
	}
}
void output(int num, int ans, int max, int min)
{
	if (ans < num) 
		printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
	else 
		printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}