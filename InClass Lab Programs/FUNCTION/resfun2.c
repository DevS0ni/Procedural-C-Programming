//recusion
#include<stdio.h>
int factorial(int n)
{
	if(n>0)
	{
		return n*factorial(n-1);
	}
	else if(n==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	printf("Enter number:- ");
	scanf("%d",&num);
	if(factorial(num)==0)
	{
		printf("\n No factorial for negative number\n");
	}
	else
	{
		printf("\n Factorial:- %d",factorial(num));
	}
	
	return  0;
	
}
