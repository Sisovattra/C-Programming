#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three values");
	scanf("%d %d %d",&a,&b,&c);
	{
		if (a>b&&a>c)
		{
			printf ("%d is greatest than both %d %d",a,b,c);
		}
		else 
		{
			printf ("%d %d are low than %d",b,c,a);
		}
		
	}
}
