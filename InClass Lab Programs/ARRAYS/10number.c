#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],i;

clrscr();

printf(“Enter 10 numbers:”);
for(i=0;i<10;i++)
	scanf(“\t%d”,&a[i]);

printf(“Numbers are :”);

for(i=0;i<10;i++)
	printf(“	%d”,a[i]);

getch();
}
