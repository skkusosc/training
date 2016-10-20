#include<stdio.h>

int main()
{
	int kor, eng, math;
	int average = 0;

	math = 80;
	eng = 100;
	kor = 90;
	average = 80 + 100 + 90;

	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Sum : %d\n", average);
	printf("Mean : %d\n", average/3);
	return 0;
}
