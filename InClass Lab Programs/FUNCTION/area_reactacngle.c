#include <stdio.h>

void rectangle(int a, int b, int * area, int * perim);

int main()
{
  int x, y;
  int area, perim;
  printf("Enter two values separated by space: " );
  scanf("%d %d", &x, &y);
  rectangle(x, y, &area, &perim);
  printf("Area is %d Perimeter is %d\n", area, perim);
  return 0;
}

void rectangle(int a,int b,int * area,int * perim)
{
  *area = a * b;
  *perim = 2 * (a + b);
}