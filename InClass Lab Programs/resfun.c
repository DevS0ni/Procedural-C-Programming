// recursion
#include<stdio.h>
#include<stdlib.h>
void recursion()
{
	int n;
	printf("\nRecursive Function\n");
	printf("Enter Number:- ");
	scanf("%d",&n);
	if(n==8)
	{
		exit(0);
	}
	
	recursion();
}
int main()
{
	recursion();
	return 0;
}
