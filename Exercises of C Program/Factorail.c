#include<stdio.h>
main()
{
	int a,i,factorial;
	printf("Enter the value:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		factorial=factorial*i;
	}
	printf("The factorial of number is %d",factorial);
}
