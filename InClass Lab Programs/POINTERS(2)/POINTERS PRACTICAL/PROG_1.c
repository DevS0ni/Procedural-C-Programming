// [1.] ASSIGNMENT-1 POINTERS.
 
#include<stdio.h>
int main()
{
	int a=10,*p,**p1,*n=NULL;
	p=&a;
	p1=&p;
	*p=*p+10;
	**p1=**p1+10;
	
	printf("\n\n-----------POINTERS-----------\n\n");
	printf("\n\n  * Value of 'a' = %d",a);
	printf("\n  * Address of 'a' = %u",p);
	printf("\n  * Value of 'p' = %d",p);
	printf("\n  * Value of '*p' = %d",*p);
	printf("\n  * Address of 'p' = %u",p1);
	printf("\n  * Value of 'p1' = %d",p1);
	printf("\n  * Value of '**p1' = %d",**p1);
	printf("\n  * Address of '**p1' = %u",&p1);
	printf("\n  * Value of '*n' = %u",n);
	printf("\n\n");
	
	return 0;
}
