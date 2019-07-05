#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a=\n");
	scanf("%d",&a);
	printf("Enter the value of b=\n");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swap\n");
	printf(" first value %d\n",a);
	
	printf("second value %d\n",b);
}
