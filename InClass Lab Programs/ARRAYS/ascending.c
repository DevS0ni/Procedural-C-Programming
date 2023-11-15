//write a program to sort given array in a ascending order.

#include <stdio.h>
#include <conio.h>

void main()
	
{
	int a[10],n,i,j,temp;
	clrscr();
	printf("How many elements :");
	scanf("%d",&n);
	
	printf("Enter %d elements below",n);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted List\n");
	for(i=0;i<n;++i)
		printf("%d\n",a[i]);

	getch();
}