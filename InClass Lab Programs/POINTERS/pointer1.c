#include <stdio.h>

int main()
{
  int a = 10, b = 2;
  int *p1, *p2;
  p1 = &a;
  p2 = &b;
  printf("%p %p \n", p1, p2);
  printf("%d %d \n", *p1, *p2);
  return 0;
}