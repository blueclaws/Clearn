#include<stdio.h>
int main(void)
{
	int k=0;
	for(int i=1; i<=300; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i%j == 0)
			{
				k++;	
			}
		}
		if( k == 2)
		{
			printf("The number, %d, is prime.\n", i); 
		}
		k = 0;
	}
	return 0;
}
