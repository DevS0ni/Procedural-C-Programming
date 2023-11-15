//A program that reads elements and assign them in an array. Then, it prints the array elements out.

#include <stdio.h>

void get_array(int a[], int size);
void prt_array(int a[], int size);

#define SIZE 10

int main()
{
  int a[SIZE];
  get_array(a, SIZE);
  prt_array(a, SIZE);
  printf("\n");
  return 0;
}

void get_array(int a[], int size)
{
  int i;
  printf("Enter 10 values, after each value press enter:\n " );
  for (i = 0; i < size; i++)
    scanf("%d", &a[i]);
}

void prt_array(int a[], int size)
{
  int i;
  printf("Printing all values :\n");
  for (i = 0; i < size; i++)
    printf("%d\n", a[i]);
}