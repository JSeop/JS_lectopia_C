#include<stdio.h>
int main()
{
	int a = 1, b = 1, temp, i, num, sum=0;

	printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (i % 2 == 1){
			printf("%d", a);
			sum += a;
			temp = a + b;
		}
		else {
			printf("%d", b);
			sum += b;
			b = temp+b;
			a = temp;
		}
		printf(" + ");
	}
	printf("\b\b\b = %d\n", sum);
	return 0;
}