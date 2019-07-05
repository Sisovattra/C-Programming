#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter two value\n");
	scanf("%d %d",&a,&b);
	printf("Before swap\n first value=%d\n to second value=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap\n first value=%d\n to second value=%d\n",a,b);
}
