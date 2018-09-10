/*
	Aggregate  - mean
	percentage  - (SUM(marks)/TOT(marks))*100
*/
#include<stdio.h>
int main(void)
{
	float a, b, c, d, e, n, sum, tot, agg, per;

	printf("Enter marks in each subject: ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);

	sum = a + b + c + d + e;
	n = 5;
	tot = 500;
	agg = sum/n;
	per = (sum/tot)*100;

	printf("The aggregate of marks obtained are; %f\n", agg);
	printf("The percentage of marks obtained are: %f\n", per);
	return 0;
}
