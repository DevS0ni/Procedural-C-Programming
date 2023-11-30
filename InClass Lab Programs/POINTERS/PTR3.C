#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add;
	int *p,*q;
	clrscr();

	a=5;
	b=5;
	p=&a;
	q=&b;

	add = *p + *q;
	printf("Addition = %d",add);

getch();
}