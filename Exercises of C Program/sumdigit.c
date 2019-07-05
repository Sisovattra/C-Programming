/* C Program to Find Sum of Digits of a Number using While Loop */

#include <stdio.h>
main()
{
  int Num, R, Sum=0;
  printf("\nEnter the number\n");
  scanf("%d", &Num);
  while(Num > 0)
  {
     R= Num % 10;
     Sum = Sum+ R;
     Num = Num / 10;
  }
  printf("\n Sum of the digits of Number = %d", Sum);
}
