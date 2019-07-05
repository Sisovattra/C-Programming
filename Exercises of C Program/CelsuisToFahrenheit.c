#include<stdio.h>
main()
{
	float C,F;
	printf("Enter the value of Celsius: ");
	scanf("%f",&C);
	
	F=( 9/5*C)+32;
	printf("%.2f C =%.2f F",C,F);
	
}
