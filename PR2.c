#include <stdio.h>

int main()
{
	int a;
	long int b;

	mark1:
	printf("enter the inital sum of more than 10000:");
	scanf("%li",&b);
	printf("\n");
	if (b < 10000) 
		goto mark1;
	
	mark2:
	printf("enter the number of days less than a year:");
	scanf("%d",&a);
	printf("\n");
	if (a > 365 || a<0) 
		goto mark2; 
	printf("\n");


	if (b<100000)
	{
		if (a>=0 && a<=30)
			b=b-(b*10/100);
		if (a >= 31 && a <= 120) 
			b = b + (b * 2 / 100); 
		if (a >= 121 && a < 240) 
			b = b + (b * 6 / 100); 
		if (a >= 241 && a <= 365) 
			b = b + (b * 12 / 100); 
	}

	else 
	{ 
		if (a >= 0 && a <= 30) 
			b = b - (b * 10 / 100); 
		if (a >= 31 && a <= 120)
			b = b + (b * 3 / 100); 
		if (a >= 121 && a < 240) 
			b = b + (b * 8 / 100); 
		if (a >= 241 && a <= 365) 
			b = b + (b * 15 / 100); 
	} 

	printf("The amount for the period of %d days: %li \n",a,b); 

	return (0);
}
