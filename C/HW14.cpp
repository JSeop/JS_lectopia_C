#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int len;
	printf("* ���ڿ� �Է� : ");
	scanf("%s", str);
	len = strlen(str) / 2;
	printf("[%*.*s...]\n", strlen(str), len, str);

	return 0;
}