#include<stdio.h>
#include<conio.h>

void main()
{
	int num,xnum,temp,rev=0;
	printf(“enter number:”);
	scanf(“%d”,&num);
	xnum=num;
	do
	{
		temp=xnum%10;
		rev=(rev*10)+temp;
		xnum=xnum/10;
	}
while(xnum!=0);
	printf (“reversed number is %d”, rev);

getch();
}
