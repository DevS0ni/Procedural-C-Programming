#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a,i=1,sum=0;
	printf(“\n How many Number:”);
	scanf(“%d”,&n);

	while(i<=n)
	{
	printf(“\nEnter number:”);
		scanf(“%d”,&a);
		sum+=a;
		i+=1;
	}

printf(“Sum =%d”,sum);
getch();
}
