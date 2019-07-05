#include<stdio.h>
void main()
{
	int arr[30],element,num,i,location;
	printf("\n Enter no of elements:");
	scanf("%d",&num); //jong ban man element
	
	for(i=0;i<num;i++) //jong store nv na
	{
	scanf("%d",&arr[i]);
    }
    
	printf("\n Enter the element to be inserted:"); //jong insert s'ey
	scanf("%d",&element);
	
	printf("\n Enter the location");  // jong dak index ti man
	scanf("%d",&location);
	
	for(i=num;i>=location;i--)
	{
	
	arr[i]=arr[i-1];
	num++;
	arr[location-1]=element;
	for(i=0;i<num;i++)
	printf("\n %d",arr[i]);
}
