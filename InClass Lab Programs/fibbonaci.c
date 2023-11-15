#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a=1,b=1,c;
	
	clrscr();
	
	printf("\n Enter last term :");
	scanf("%d",&n);
	
	printf("\nSeries : \t%d\t%d,a,b);
	
	do
	{
		c=a+b;
		printf("  %d",c);
		a=b;
		b=c;
	}while(c<=n);
	
	getch();
}