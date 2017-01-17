#include<stdio.h>

int main()
{
	int num, sum=0, i, count=0, gold=1, check=0;
	printf("*기사의 근무일수를 입력하시오 : ");
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
	printf("근무일 : %d 일 / 총 금화 수 : %d\n", num, sum);
	return 0;
}