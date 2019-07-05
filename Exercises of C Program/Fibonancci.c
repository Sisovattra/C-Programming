/* Fibonacci series program in C language */
#include <stdio.h>
 
int main()
{
  int n, first = 1, second = 1, next, c; 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (c = 1; c < 100; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}

