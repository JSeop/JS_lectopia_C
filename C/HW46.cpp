#include<stdio.h>
void inputRange(int *, int *);
char evenOdd(int *, int *);
void output(char, int*, int*); 
void myfflush();
int main()
{
	int smallNum, bigNum;
	char oddEven;
	inputRange(&smallNum,&bigNum);
	oddEven=evenOdd(&smallNum, &bigNum);
	output(oddEven, &smallNum, &bigNum);
	return 0;
}
void inputRange(int * smallNum, int *bigNum)
{
	while (1) {
		printf("#시작 값을 입력하시오 : ");
		scanf("%d", smallNum);
		if (0 < *smallNum&&getchar() == '\n')   // 0 입력 시 재입력하도록 요구함
			break;
		myfflush();
	}
	while (1) {
		printf("#끝 값을 입력하시오 : ");
		scanf("%d", bigNum);
		if (0<*bigNum && (*smallNum < *bigNum) && getchar() == '\n') {
			return;
		}
		myfflush();

	}
}
char evenOdd(int *smallNum, int * bigNum)
{
	char oddEven;
	while(1) {
		printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ",*smallNum,*bigNum);
		scanf("%c", &oddEven);
		if (oddEven == 'e' || oddEven == 'o')
			return oddEven;
		myfflush();
	}
}
void output(char oddEven, int *smallNum, int * bigNum)
{
	int i, sum=0;
	if (oddEven == 'e') {
		printf("%3d~%d 까지의 짝수(", *smallNum, *bigNum);
		for (i = *smallNum; i <= *bigNum; i++) {
			if (i % 2 == 0) {
				printf("%d ", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다. \n", sum);
	}
	else{
		printf("%3d~%d 까지의 홀수(", *smallNum, *bigNum);
		for (i = *smallNum; i <= *bigNum; i++) {
			if (i % 2 == 1) {
				printf("%d ", i);
				sum += i;
			}
		}
		printf(")의 합은 %d 입니다. \n", sum);
	}
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}