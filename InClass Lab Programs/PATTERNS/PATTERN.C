#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,num;

	clrscr();

	printf("Enter the Number of rows to be printed :");
	scanf("%d",&num);

	for(i=0;i<=num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("  *");
		}
		printf("\n");
	}

	getch();
}