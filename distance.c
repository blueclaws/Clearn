/*
	1 km = 1000m
	1 km = 3280.84 ft
	1 km = 39370.1 in
	1 km = 100000 cm
*/
#include<stdio.h>
int main(void)
{
	float dist, m, ft, in, cm;
	printf("Enter the distance in km: ");
	scanf("%f", &dist);

	m = dist*1000;
	ft = dist*3280.84;
	in = dist*39370.1;
	cm = dist*100000;

	printf("Distance in meters: %f\n", m);
	printf("Distance in feet: %f\n", ft);
	printf("Distance in inches: %f\n", in);
	printf("Distance in centemeter: %f\n", cm);
	return 0;
}
