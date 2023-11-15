//nested structure
#include<stdio.h>
// sperate structrue
/*struct dob
{
	int d,m,y;
};*/
// embedded Structure
struct student
{
	int sno;
	char snm[10];
	float per;
	struct dob
	{
		int d,m,y;
	}d1;	
	//struct dob d1;
}s[5];
int main()
{
	int i;
	//struct student s;
	for(i=0;i<3;i++)
	{
		printf("Enter Student No:- ");
		scanf("%d",&s[i].sno);
		printf("Enter Student Name:- ");
		scanf("%s",&s[i].snm);
		printf("Enter Student percenatge:- ");
		scanf("%f",&s[i].per);
		printf("Enter Date of Birth:- ");
		scanf("%d %d %d",&s[i].d1.d,&s[i].d1.m,&s[i].d1.y);
		
	}
	
	printf("\n ----------------------- Student Details ---------------------\n\n");
	printf("\n No\tName\tPer\tDOB\n\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%.2f\t%d-%d-%d\n",s[i].sno,s[i].snm,s[i].per,
		s[i].d1.d,s[i].d1.m,s[i].d1.y);
	}	
	return 0;
	
}
