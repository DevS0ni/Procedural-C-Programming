#include<stdio.h>
#include<conio.h>

void main()
{
	int m[10],ins,i,n,pos;

	printf("How many Elemets ? :");
	scanf("%d",&n);
	
	printf("Enter %d Elements below\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&m[i]);
	
	printf("Enter number to be inserted:");
	scanf("%d",&ins);
	
	printf("Enter Position:");
	scanf("%d",&pos);
	
	for(i=n;i>pos;--i)
		m[i]=m[i-1];
	m[pos]=ins;
	n++;
	printf("Array after insertion\n");
	for(i=0;i<n;++i)
		printf("%d\n",m[i]);
	getch();
}