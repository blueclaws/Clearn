generate: salary_calc.c distance.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	gcc -Wall distance.c -o Distance
	mv SalaryCalculator Distance build/

clean:
	rm -r build/*
