//Program for accepting 10 numbers and printing sum of odd nos even nos.

#include<stdio.h>

void main()
{
	int a[10],i,even=0,odd=0;
	
	printf("\n\n Enter any TEN numbers :");
	
	for(i=0;i<10;i++)
		scanf("\t%d",&a[i]);
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			even=even+a[i];
		else
			odd=odd+a[i];
	}
	
	printf("	%d",odd);
	printf("	%d",even);
}