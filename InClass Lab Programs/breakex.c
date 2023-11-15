#include<stdio.h>
int main()
{
	int n;
	while(1)
	{
		printf("\n Infinite loop\n");
		printf("\n Enter n:- ");
		scanf("%d",&n);
		if(n==5)
		{
			break;
		}
	}
	return 0;
}
