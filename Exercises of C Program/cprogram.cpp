#include<stdio.h>
main()
{
	char name [21];
	char address [31];
	puts("Please enter your name:");
	gets(name);
	fflush(stdin);
	puts("Please enter your address:");
	gets(address);
	fflush(stdin);
	puts("Your name is:");
	puts(name);
	puts("Your address is:");
	puts(address);
}
