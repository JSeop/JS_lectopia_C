#include<stdio.h>

int main()
{
	int num, sum=0, i, count=0, gold=1, check=0;
	printf("*����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	while(1){
		for (i = 1; i <= gold; i++) {
			sum += gold;
			count++;
			if (num == count) {
				check++;
				break;
			}
		}
		if (check != 0)
			break;
		gold++;
	}
	printf("�ٹ��� : %d �� / �� ��ȭ �� : %d\n", num, sum);
	return 0;
}