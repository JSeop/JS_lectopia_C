#include<stdio.h>

int main()
{
	int num1, num2;
	while (1) {
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		if (scanf("%d %d", &num1, &num2) != 2)
			break;
		if (num1 <= num2)
			printf("%d - %d = %d\n", num2, num1, num2 - num1);
		else
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	return 0;
}