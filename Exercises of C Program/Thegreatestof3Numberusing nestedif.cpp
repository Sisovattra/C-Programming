#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three values\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		printf("%d is greatest than both %d %d\n",a,b,c);
	}
	else if(a>b&&b>c)
	{
		printf("%d is greatest than both %d %d\n",a,b,c);
	}
	else if(a>c&&c>b)
	{
		printf("%d is greatest than both %d %d\n",a,b,c);
    }
	else 
	{
		printf("%d is low than %d\n");
	}
	
}


