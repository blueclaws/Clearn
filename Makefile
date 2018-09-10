generate: salary_calc.c distance.c marks.c prime.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	gcc -Wall distance.c -o Distance
	gcc -Wall marks.c -o Marks
	gcc -Wall prime.c -o Prime
	mv SalaryCalculator Distance Marks Prime build/

clean:
	rm -r build/*
