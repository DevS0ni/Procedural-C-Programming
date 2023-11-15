// Write a program to print all prime numbers in a given range .

#include <stdio.h>
#include <conio.h>

void main()
{
	int n,r1,r2,d=2,flag;
		
	clrscr();
	
	printf("\n Enter the Range :");
	scanf("%d%d",&r1,&r2);
	
	printf("\n Prime Numbers :");
	
	for(n=r1;n<=r2;n++)
	{
		flag=1;
		for(d=2;d<n-1;d++)
		{
			if(n%d==0)
			{
				flag=0;break;
			}
		}
		if(flag==1)printf("\t%d",n);
	}
	getch();
}	
