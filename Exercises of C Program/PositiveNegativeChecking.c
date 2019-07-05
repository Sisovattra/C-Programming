#include<stdio.h>
main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<=0)
	{
		if(num==0)
		printf("It is Zero number");
		else
		printf("It is Negative number");
	}
	else
	{
		printf("It is Positive number");
	}
}
