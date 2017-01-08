#include<stdio.h>

int input();
int main()
{
	int num;
	num = input();
	printf("입력된 값은 8진수로 %#o 입니다.\n", num);
	printf("입력된 값은 16진수로 %#x 입니다.\n", num);
	return 0;
}
int input()
{
	int num;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}