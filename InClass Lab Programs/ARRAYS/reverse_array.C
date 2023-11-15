#include<stdio.h>
#include<conio.h>
 
int main()
{
   int n[10], reverse = 0,i,j=0;

   printf("Enter a number to reverse\n");
   for(i=0;i<5;i++)
	   scanf("%d",&n[i]);

   for(j=0;j<5;j++)
   {
	while (n[j]!=0)
	{
	reverse = reverse * 10;
	reverse = reverse + n[j]%10;
	n[j] = n[j]/10;
	}
	n[j]=reverse;
	reverse=0;
   }
   printf("Reverse of entered number is \n");

   for(i=0;i<5;i++)
	printf("%d \n",n[i]);

   return 0;
}


