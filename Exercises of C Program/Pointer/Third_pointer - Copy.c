#include<stdio.h>
int main()
{
	int i,class[10],sum=0;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(class+i));//(class+i)is equivalent to & class[i]
		sum+=*(class+i);//*(class+i)is equivalent to class[i]
	}
	printf("Sum=%d",sum);
	return 0;
	
}
