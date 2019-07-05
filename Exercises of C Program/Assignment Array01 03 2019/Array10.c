#include<stdio.h>
main()
{
	int a[5],i,b=16;
	
	for(i=0;i<5;i++)
	a[i]=2*i;f(a,b);
	
	for(i=0;i<5;i++)
	printf("\n%d",a[i]);
	printf("\n%d",b);
}

f(int *x,int y)
{
	int i;
	for(i=0;i<5;i++)
	*(x+1)+=2;
	y+=2;
}
//out put:
//0
//12
//4
//6
//8
//16
