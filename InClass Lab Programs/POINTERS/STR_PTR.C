//pointer with structure

#include<stdio.h>
#include<conio.h>

struct Addition
{
	int a,b,add;
}*a1;

void main()
{
	a1->a=5;
	a1->b=8;
	clrscr();

	a1->add = a1->a + a1->b;

	printf("Addition = %d",a1->add);
getch();
}