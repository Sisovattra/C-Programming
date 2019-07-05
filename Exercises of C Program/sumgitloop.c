 /* C Program to Find Sum of Digits of a Number using For Loop */

#include <stdio.h>
main()
{
  int Num,a, Sum;
  printf("\nEnter any number\n");
  scanf("%d", &Num);
  for (Sum=0;Num > 0;Num=Num/10)
  {
     a = Num % 10;
     Sum=Sum+ a;  
  }
  printf("\n Sum of the digits of Number = %d", Sum);
}
