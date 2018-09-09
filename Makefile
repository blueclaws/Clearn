generate: salary_calc.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	mkdir build
	mv SalaryCalculator build/
