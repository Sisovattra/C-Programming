#include<stdio.h>
/*function to input and display a character using the function getchar()*/
main()
{
	char a,b,c;
	a=getchar();
	b=getchar();
	c=getchar();
	fflush(stdin); /*clear the buffer*/
	putchar(a);
	putchar(a);
	putchar(b);
	putchar(b);
	putchar(c);
	putchar(c);
}
