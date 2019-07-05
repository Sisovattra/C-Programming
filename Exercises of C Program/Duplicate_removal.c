#include<stdio.h>
void main()
{
	int a[50],
	int i,j,k,size,n,t;
	printf("\nEnter sizeof the array:");
	scanf("%d",&n);
	printf("\nEnter %d elements into the array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    size=n;
    for(i=0;i<size;i++)
    {
    	for(j=0;j<size;j++)
    	{
    		if(i==j)
    		continue;
    		else if(a[i]==a[j])
    		{
    			k=j;
    			size--;
    			while(k<size)
    			{
    				a[k]=a[k+1];
    				k++;
				}
				j=0;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[J])
			{ 
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	printf("\nThe array after removing duplicates is:");
	for(i=0;i<size;i++)
	printf("%d",a[i]);
}
