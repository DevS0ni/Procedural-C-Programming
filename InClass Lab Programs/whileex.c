// 1+2+3+4+5=15
// 1*2*3*4*5=120
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;	
	printf("Enter number:- ");
	scanf("%d",&n);  // n=6
	while(i<=n)     // 1<=5 2<=5 3<=5 4<=5 5<=5 6<=6
	{
		printf("%d + ",i);
		sum=sum+i;   // sum=0+1=1  sum=1+2=3 sum=3+3=6 sum=6+4=10 sum=10+5=15  sum=15+6=21
		i++;  // i=2 i=3  i=4   i=5  i=6 
	}
	printf(" = %d",sum);
	return 0;
}

