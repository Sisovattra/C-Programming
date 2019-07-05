#include<stdio.h>
#include<string.h>
main()
{
	char *str1="United";
	char *str2="State";
	char *str3;
	//char *strcat( char *str1, const char *str2);
	str3 = strcat (str1,str2);
	printf("\n%s",str3);

}
