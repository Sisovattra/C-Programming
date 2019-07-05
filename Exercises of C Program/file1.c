/*#include<stdio.h>
int main()
{
	int n;
	FILE *fptr;
	if((fptr=fopen("C:/Users/ASUS/Desktop/Sun/flower.txt","r"))==NULL)
	{
		printf("Error! opening file");
	}
	fscanf(fptr,"%d",&n);
	printf("Value of n=%d",n); 
	fclose(fptr);
	return 0;
}*/
#include <stdio.h>
#include <locale.h>	
int main()
{
   int n;
   FILE *fptr;
   if ((fptr=fopen("C:/Users/ASUS/Desktop/Sun/sun.txt","r"))==NULL){
       printf("Error! opening file");
       //exit(1);         /* Program exits if file pointer returns NULL. */
   }
   fscanf(fptr,"%d",&n);
   printf("Value of n=%d",n); 
   fclose(fptr);   
   return 0;
}

