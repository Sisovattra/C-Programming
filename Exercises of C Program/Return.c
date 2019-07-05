#include<stdio.h>
main()
{
	int a,b,c,i;
	printf("Enter the value:");
	scanf("%d",&a);
	printf("Enter the value:");
	scanf("%d",&b);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d =%d",a,i,a*i);
		printf("\t%d x %d =%d\n",b,i,b*i);
	}
}/*#include<stdio.h>
main()
{
	int n,a,i,m;
	printf("Enter the value:");
	scanf("%d",&n);
	printf("Enter the value:");
	scanf("%d",&m);
	for(i=1;i<=10;i++)
	{
      printf("%d x %d = %d",n,i,n*i);
      printf("\t%d x %d = %d\n",m,i,m*i);
	  		
	}

}*/
