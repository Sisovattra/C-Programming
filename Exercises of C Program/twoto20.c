#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value:");
	scanf("%d",&a);
	for(a=b;a<=10;a++)
	{
	  for(i=1;i<=10;i++)
	  {
	  	printf("%d x %d= %d\n",a,i,i*a);
	  }
	  printf("-----------------\n");	  	
	}
}
