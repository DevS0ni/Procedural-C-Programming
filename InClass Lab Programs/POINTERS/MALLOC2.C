//program to solve the expression

#include<stdio.h>

int *a,*b,*c;

void main()
{
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	c=(int*)malloc(sizeof(int));

	printf("\nEnter A :");scanf("%d",a);
	printf("\nEnter B :");scanf("%d",b);

	*c=(*a**a)+(*b**b);

	printf("\nA =%d",*a);
	printf("\nB =%d",*b);
	printf("\nAnswer =%d",*c);yy

}