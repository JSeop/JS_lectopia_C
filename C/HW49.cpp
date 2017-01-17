#include<stdio.h>
FILE *fileOpen(char *filename, char *mode);
int fileRead(FILE *fp, int *dataAry);
int makeDouble(int *, int, int);
int main()
{
	int cnt,i,j,dataAry[100], count, check, num;
	FILE *fp;
	fp = fileOpen("C:\\data\\hw49_number_list.txt","rt");
	if (fp == NULL)
		return 1;
	fscanf(fp, "%d", &cnt);
	for (i = 0; i < cnt; i++) {
		num = 0;
		count = fileRead(fp, dataAry);
		printf("# 수열: ");
		for (j = 0; j < count; j++) {
			check=makeDouble(dataAry, count, dataAry[j]);
			if (check == 1) 
				num++;
			printf("%d ", dataAry[j]);
		}
		printf("\n2배 값이 존재하는 원소의 개수는 %d개 입니다.\n", num);
	}
	fclose(fp);
	return 0;
}
int makeDouble(int *dataAry, int count, int dataArray)
{
	int i;
	for (i = 0; i < count; i++) {
		if (dataArray*2 == dataAry[i])
			return 1;
	}
	return 0;
}
FILE * fileOpen(char *filename, char *mode)
{
	FILE *fp;
	if((fp=fopen(filename, mode))==NULL){
		printf("File open error!\n");
	}
	return fp;
}

int fileRead(FILE *fp, int *dataAry)
{
	int cnt=0;
	while (1) {
		fscanf(fp, "%d", &dataAry[cnt]);
		if (dataAry[cnt] == 0)
			break;
		cnt++;
	}
	return cnt;
}