//Array Of C Programming
#include <stdio.h>
int main()
{
    int avg = 0;
    int sum =0;
    int x=0;

    /* Array- declaration – length 4*/
    int num[4];

    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */
    for (x=0; x<4;x++)
    {
        printf("Enter number %d \n", (x+1));
        scanf("%d", &num[x]);
    }
    for (x=0; x<4;x++)
    {
        sum = sum+num[x];
    }

    avg = sum/4;
    printf("Average of entered number is: %d", avg);
    
}
//0utput
//Enter number 1
//1
//Enter number 2
//2
//Enter number 3
//3
//Enter number 4
//4
//Average of entered number is: 2
//--------------------------------
