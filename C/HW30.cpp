#include<stdio.h>

int main()
{
	int num,i= 1073741824;
	printf("* 10진수 정수를 입력하시오 : ");
	scanf("%d",&num);
	printf("%d(10) = ",num);
	if (0 <= num)
		printf("0");
	else
		printf("1");
	while (i!=0) {
		if ((i&num) == i)
			printf("1");
		else
			printf("0");
		i >>= 1;
	}
	printf("(2)\n");
	return 0;
}