#include<stdio.h>
/* funtion to input and display a character using the function getchar() */
main ()     
{	
char c;
c = getchar ();
fflush (stdin);    /* clear the buffer */
putchar (c);
}
