#include<stdio.h>
main()
{
	int a[]={2,4,6,8,10};
	int i;
	change (a,5);
	for(i=0;i<=4;i++)
	printf("\n%d",a[i]);
	
}

change(int*b,int n)
{
	int i;
	for(i=0;i<n;i++)
	*(b+i)=*(b+1)+5;
}
//out put: 9 9 14 14 14
