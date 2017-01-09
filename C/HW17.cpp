#include<stdio.h>
#include<string.h>
void myfflush();
int main()
{
	char name[1000];
	double height;
	char sex;

	printf("# 성명 입력 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &height);
	printf("# 성별입력(M/F) : ");
	myfflush();
	scanf("%c", &sex);
	if (sex == 'M')
		printf("# %s씨의 키는 %.2lf이고 남성입니다.\n", name, height);
	else if (sex == 'F')
		printf("# %s씨의 키는 %.2lf이고 여성입니다.\n", name, height);
	return 0;
}

void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}