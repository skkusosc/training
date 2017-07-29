#include<stdio.h>

int main()
{
	int kor, eng, math;
	int avg = 0;

	math = 80;
	eng = 100;
	kor = 90;
	avg = 80 + 100 + 90;
	avg=avg/3;
	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Mean : %d\n", avg);
	return 0;
}
