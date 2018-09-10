generate: salary_calc.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	mv SalaryCalculator build/
