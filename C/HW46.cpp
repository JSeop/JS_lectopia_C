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
		printf("#���� ���� �Է��Ͻÿ� : ");
		scanf("%d", smallNum);
		if (0 < *smallNum&&getchar() == '\n')   // 0 �Է� �� ���Է��ϵ��� �䱸��
			break;
		myfflush();
	}
	while (1) {
		printf("#�� ���� �Է��Ͻÿ� : ");
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
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ",*smallNum,*bigNum);
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
		printf("%3d~%d ������ ¦��(", *smallNum, *bigNum);
		for (i = *smallNum; i <= *bigNum; i++) {
			if (i % 2 == 0) {
				printf("%d ", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�. \n", sum);
	}
	else{
		printf("%3d~%d ������ Ȧ��(", *smallNum, *bigNum);
		for (i = *smallNum; i <= *bigNum; i++) {
			if (i % 2 == 1) {
				printf("%d ", i);
				sum += i;
			}
		}
		printf(")�� ���� %d �Դϴ�. \n", sum);
	}
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}