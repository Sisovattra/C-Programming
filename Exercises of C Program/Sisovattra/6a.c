#include<stdio.h>
main()
{

	int x,min,max;
	printf("\nEnter the value of x: ");
	scanf("%d %d",&max,&x);
	x>max?(max=x):(min=x);
	printf("\n%d %d",max,min);	

}
