//Program to show array using pointer

#include <stdio.h>
#include <conio.h>

void main(0
{
	int i,n,*ip;
	clrscr();
	printf("\nEnter how many elements fo u wnat to enter ");
	scanf("%d",&n);
	
	ip=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		printf("\t%dth Element :",i+1);
		scanf("%d",&ip[i]);
	}	
	
	printf("\n");
	for(i=0;i<n;i++)
		printf("Element%d:%d \t",i+1,ip[i]);
	getch();
}
	