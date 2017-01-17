#include<stdio.h>

int main()
{
	int num,i,sum=0;

	for (i = 0; i < 5;i++ ) {
		printf("0보다 큰수를 입력하시오(%d 번째) : ",i+1);
		scanf("%d", &num);
		if (num <= 0) 
			--i;
		else 
			sum += num;
	}
	printf("입력된 값의 총 합 : %d\n", sum);
	return 0;
}