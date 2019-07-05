#include<stdio.h>
#include<string.h>
main()
{
	struct employee
	{
		char name[25];
		char language[10];
	};
	
	 struct employee e;
	strcpy(e.name,"Hacker");
	strcpy(e.language,"c");
	 
	printf("\n%s %s",e.name,e.language);
	
	
}

