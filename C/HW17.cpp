#include<stdio.h>
#include<string.h>
void myfflush();
int main()
{
	char name[1000];
	double height;
	char sex;

	printf("# ���� �Է� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &height);
	printf("# �����Է�(M/F) : ");
	myfflush();
	scanf("%c", &sex);
	if (sex == 'M')
		printf("# %s���� Ű�� %.2lf�̰� �����Դϴ�.\n", name, height);
	else if (sex == 'F')
		printf("# %s���� Ű�� %.2lf�̰� �����Դϴ�.\n", name, height);
	return 0;
}

void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}