#include<stdio.h>
#include<math.h>

int input();
int primeNumber(int);
void myfflush();
int main()
{
	int i, num,count=0,check;
	num = input();
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", num);
	for (i = 2; i <= num;i++)
	{
		if (primeNumber(i)) {
			++count;
			printf("%3d  ", i);
			if (count %5==0)
				printf("\n");
		}
	}
	printf("\n1~%d������ �� �Ҽ��� %d�� �Դϴ�.\n",num,count);
	return 0;
}
int input()
{
	int num;
	while (1) {
		printf("*������ �ϳ��� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (1<num && getchar() == '\n')  // 1���� ū ������ �Ҽ��� ��ȿ�ϱ� ������ 1������ ���� �Է��� �ÿ� ���Է� �䱸
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