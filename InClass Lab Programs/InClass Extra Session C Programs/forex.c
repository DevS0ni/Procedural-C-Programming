// 1 to 100
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i>60 && i<80)
		{
			goto next;
		}
		else
		{
			printf("%d  ",i);
		}	
	}
	next:
		printf("\n Goto executed...");
	return 0;
}
