#include<stdio.h>
#include<math.h>

int input();
int primeNumber(int);
void myfflush();
int main()
{
	int i, num,count=0,check;
	num = input();
	printf("1~%d까지의 소수 값은 다음과 같습니다.\n", num);
	for (i = 2; i <= num;i++)
	{
		if (primeNumber(i)) {
			++count;
			printf("%3d  ", i);
			if (count %5==0)
				printf("\n");
		}
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.\n",num,count);
	return 0;
}
int input()
{
	int num;
	while (1) {
		printf("*정수값 하나를 입력하시오 : ");
		scanf("%d", &num);
		if (1<num && getchar() == '\n')  // 1보다 큰 수에서 소수가 유효하기 때문에 1이하의 수를 입력할 시에 재입력 요구
			return num;
		myfflush();
	}
}
int primeNumber(int number)
{
	int i, check=0;
	for (i = 2; i <= sqrt(number); i++) {
		if (!(number%i))
			return 0;
	}
	return 1;
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}