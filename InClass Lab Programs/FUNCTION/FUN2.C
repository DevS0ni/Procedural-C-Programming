#include <stdio.h>
#include <conio.h>

void triangle();

void main()
{
	triangle();
	getch();
}

void triangle()
{
	int base,height;
	float area;

	clrscr();

		printf("\n Accept base :");
		scanf("%d",&base);

		printf("\n Accept Height :");
		scanf("%d",&height);

		area=0.5*base*height;

	printf("\n Area of Triangle=%f",area);
}