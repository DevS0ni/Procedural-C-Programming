//WAP to calculate perimeter of rectangle using pointers.

#include<stdio.h>

void main()

{
	int *l,*b,*p;
	l=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	p=(int*)malloc(sizeof(int));

	printf("\n Enter Length");
	scanf("%d",l);

	printf("\n Enter Breadth");
	scanf("%d",b);

	*p=2*(*l+*b);
	
	printf("\n Length = %d",*l);
	printf("\n Breadth = %d",*b);
	printf("\n Perimeter = %d",*p);
}