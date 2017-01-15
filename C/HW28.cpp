#include<stdio.h>

char input();
void output(int, int, int, int);
int main()
{
	char ch1=0;
	int countAlpha=0, countNum=0, countTab=0, countOther=0;
	printf("# 영문 문장을 입력하시오 : \n");
	while ((ch1 = input())!=EOF) {
		if (('a' <= ch1&& ch1 <= 'z') || ('A' <= ch1 && ch1 <= 'Z'))
			countAlpha++;
		else if ('0' <= ch1 && ch1 <= '9')
			countNum++;
		else if (ch1 == '\n' || ch1 == ' ' || ch1 == '\t')
			countTab++;
		else
			countOther++;
	}
	output(countAlpha, countNum, countTab, countOther);
	return 0;
}
char input()
{
	char ch1;
	ch1=getchar();
	return ch1;
}
void output(int countAlpha, int countNum, int countTab, int countOther)
{
	printf("* 영문자 대소문자 개수 : %d\n", countAlpha);
	printf("* 숫자문자 개수 : %d\n", countNum);
	printf("* 여백문자(space, tab, enter) 개수 : %d\n", countTab);
	printf("* 그 외 기타문자 개수 : %d\n", countOther);
}