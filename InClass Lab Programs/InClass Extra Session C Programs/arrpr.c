// structure with pointer
#include<stdio.h>
struct demo
{
	int no;
	char nm[10];
}d;
int main()
{
	struct demo *p;
	p=&d;
	printf("Enter no:- ");
	scanf("%d",&p->no);
	printf("Enter Name:- ");
	scanf("%s",&p->nm);
	
	printf("\n No:- %d",p->no);
	printf("\n Name :- %s",p->nm);
	return 0;
}
