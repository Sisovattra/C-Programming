#include<stdio.h>
int main()
{
	int a,b,c,d;
	puts ("1.Addition");
	puts ("2.Subtraction");
	puts ("3.Multiplication");
	puts ("4.Divition");
	puts ("5.Modulo Divition");
	puts("Enter the first number:");
	scanf("%d",&a);
	puts("Enter the second number:");
	scanf("%d",&b);
	puts("select your choice");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			c=a+b;
			printf("%d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
			c=a/b;
			printf("%d",c);
			break;
		case 5:
			c=a%b;
			printf("%d",c);
			break;
		
			
	}
	
		    
}
