#include<stdio.h>

int main()
{
	double height[5], sum = 0;
	int i = 0;
	while (i < 5) {
		printf("- %d번 학생의 키는? ", i + 1);
		scanf("%lf", &height[i]);
		sum += height[i++];
	}
	printf("다섯 명의 평균 키는 %.1lf 입니다.\n", sum / 5);
	return 0;
}