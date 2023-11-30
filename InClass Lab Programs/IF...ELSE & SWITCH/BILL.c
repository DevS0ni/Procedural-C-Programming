#include<stdio.h>
#include<conio.h>
void main()
{
	int call1,call2,call3,call4;
	float bill;

	clrscr();

	printf("Enetr Call:-");
	scanf("%d",&call1);

	if(call1<=200)
	{
		bill=0;
	}
	else if(call1>200 && call1<=300)
	{
		call2=call1-200;
		bill=call2*1.80;
	}
	else
	{
		call2=call1-200;
		call3=call2-100;
		bill=(call3*2.30)+(100*1.80);
	}
	printf("Call2:-%d\n",call2);
	printf("Call3:-%d\n",call3);
	printf("Bill:-%.2f",bill);

	getch();
}
