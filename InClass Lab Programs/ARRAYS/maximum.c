//write a program to find  maximum element from 1-D array.

#include <stdio.h>
#include <conio.h>

void main()
{
	int num[10],i,max=0,n;

	clrscr();
	
	printf("How many Elements ? :");
	scanf("%d",&n);
	
	printf("Enter %d Elements",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	
	printf("Maximum=%d",max);
}
		
