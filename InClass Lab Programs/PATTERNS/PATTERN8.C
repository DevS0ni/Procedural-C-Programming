#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,s,k,n=5;

	clrscr();	
	
	for(i=1;i<=n;++i)
	{
		if(i=1 || i==n)
		{
			for(j=1;j<n;++j)
			printf("*");
		}
		else
		{
			printf("*");
			for(s=1;s<n=n-2;++s)
			{
				printf(" ");
			}
		printf("*");
		}
	printf("\n");
	}
	getch();
}
