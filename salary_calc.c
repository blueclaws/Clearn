/*
	Basic Salary  = Input(x)
	Dearness Allowance = 40% of x
	House Rent = 20% of x
	Gross salary = ?
	Calc:
		Gross Salary = (x - (0.4*x + 0.2*x))
*/
#include<stdio.h>
int main(void)
{
	float Dear_all, House_re, Gross_sal;
	int Basic_sal, Gross_sal_int;

	printf("what is the basic salary: ");
	scanf("%d", &Basic_sal);

	Dear_all = 0.4 * Basic_sal;
	House_re = 0.2 * Basic_sal;
	Gross_sal = Basic_sal - (Dear_all + House_re);
	Gross_sal_int = (int) Gross_sal;

	printf("Gross salary is: %d\n", Gross_sal_int);
	return 0;
}
