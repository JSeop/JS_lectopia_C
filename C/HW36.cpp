#include<stdio.h>

int main()
{
	int num,i,sum=0;

	for (i = 0; i < 5;i++ ) {
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ",i+1);
		scanf("%d", &num);
		if (num <= 0) 
			--i;
		else 
			sum += num;
	}
	printf("�Էµ� ���� �� �� : %d\n", sum);
	return 0;
}