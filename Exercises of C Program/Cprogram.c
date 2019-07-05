#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter three value :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c) printf("max is a %d",a);
	if(a>b&&b>c) printf("max is b %d",b);
	else printf("max is c %d",c);
}
