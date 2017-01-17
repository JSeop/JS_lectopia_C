#include<stdio.h>
void input(double *);
void output(char*, double);
double maximum(double *);
double minimum(double *);
void myfflush();
int main()
{
	double arr[5],max,min;
	input(arr);
	max=maximum(arr);
	output("가장 큰 값 : ", max);
	min=minimum(arr);
	output("가장 작은 값 : ",min);
	return 0;
}
void input(double *arr)
{
	int i=0;
//	char ch1;
	for (i = 0; i < 5; i++) {
		printf("%d번 방의 값 : ", i);
		while (scanf("%lf", &arr[i]) != 1) {
			printf("%d번 방의 값 : ", i);
			myfflush();
		}
	}
}
void output(char * message, double res)
{
	printf("%s", message);
	printf("%.2lf\n", res);
}
double maximum(double * arr)
{
	int i;
	double max;
	for (i = 1; i < 5; i++) {
		if (arr[0] < arr[i]) {
			max = arr[i];
			arr[i] = arr[0];
			arr[0] = max;
		}
	}
	return arr[0];
}
double minimum(double * arr)
{
	int i;
//	double min;
	for (i = 1; i < 5; i++) {
		if (arr[0] > arr[i]) 
			arr[0] = arr[i];
	}
	return arr[0];
}
void myfflush()
{
	while (getchar() != '\n')
	{
		;
	}
}