generate: salary_calc.c distance.c marks.c prime.c smile.c
	gcc -Wall salary_calc.c -o SalaryCalculator
	gcc -Wall distance.c -o Distance
	gcc -Wall marks.c -o Marks
	gcc -Wall prime.c -o Prime
	gcc -Wall smile.c -o Smile
	mv SalaryCalculator Distance Marks Prime Smile build/

clean:
	rm -r build/*
