generate: salary_calc.c distance.c marks.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	gcc -Wall distance.c -o Distance
	gcc -Wall marks.c -o Marks
	mv SalaryCalculator Distance Marks build/

clean:
	rm -r build/*
