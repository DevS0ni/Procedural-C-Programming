#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,*ip,sum=0;
	clrscr();
	printf("\nEnter hopw many elements do u want to enter");
	scanf ("%d",&n);
	
	ip=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		printf("\t%dthe Element:",i+1);
		scanf("%d",ip+1);
		sum+=(*(ip+i));
	}

	printf("\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("Element%d: %d\t",i+1,*(ip+i));
	}

	printf("\nSum=%d",sum);
	getch();
}