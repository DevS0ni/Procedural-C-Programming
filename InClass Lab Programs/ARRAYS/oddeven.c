//write a program to find number of odd and even elements from the 1-D array.

#include <stdio.h>
#include <conio.h>

void main()
{
	int a[10],i,n,even=0,odd=0;
	
	clrscr();
	
	printf("How many elements :");
	scanf("%d",&n);
	
	printf("\nEnter %d elements\n",n);

	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			even++;	
		else
			odd++;
	}
	printf("Even Numbers = %d\n Odd number=%d",even,odd);
}