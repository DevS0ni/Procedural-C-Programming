
#include<stdio.h>
#include<conio.h>

void main()
{
	float a[5]={10.1,20.2,30.3,40.4,50.5};
	int i;
	float *p;
	clrscr();

	p=&a[0];

	printf("\nElement - 1 = %.2f",*(p+0));
	printf("\nElement - 2 = %.2f",*(p+1));
	printf("\nElement - 3 = %.2f",*(p+2));
	printf("\nElement - 4 = %.2f",*(p+3));
	printf("\nElement - 5 = %.2f",*(p+4));


	for(i=0;i<5;i++)
	{
		printf("\n Element = %.2f",*(p+i));
	}
getch();
}