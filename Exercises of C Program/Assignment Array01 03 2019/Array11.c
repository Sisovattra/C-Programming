#include<stdio.h>
main()
{
	static int a[5];
	int i;
	
	for(i=0;i<=4;i++)
	printf("\n%d",a[i]);
}
//out put: 0 0 0 0 0
