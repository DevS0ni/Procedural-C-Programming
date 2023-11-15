//marksheet
#include<stdio.h>
#include<string.h>
struct student
{
	int sno,s1,s2,s3,total;
	char snm[20],res[40];
	float per;
	
}s[5];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter no:- ");
		scanf("%d",&s[i].sno);
		printf("Enter name:- ");
		scanf("%s",&s[i].snm);
		printf("Enter sub1:- ");
		scanf("%d",&s[i].s1);
		printf("Enter sub2:- ");
		scanf("%d",&s[i].s2);
		printf("Enter sub3:- ");
		scanf("%d",&s[i].s3);
		
		s[i].total=s[i].s1+s[i].s2+s[i].s3;
		s[i].per=s[i].total/3;
		
		if(s[i].per>=70)
		{
			strcpy(s[i].res,"Distinction");
		}
		else if(s[i].per<70 && s[i].per>=60)
		{
			strcpy(s[i].res,"First Class");
		}
		else if(s[i].per<60 && s[i].per>=50)
		{
			strcpy(s[i].res,"Second Class");
		}
		else if(s[i].per<50 && s[i].per>=35)
		{
			strcpy(s[i].res,"Pass Class");
		}
		else
		{
			strcpy(s[i].res,"Fail");
		}
	}
	printf("\n\n ----------------- Student Marksheet -----------------\n\n");
	printf("No\tName\tSub1\tSub2\tsub3\tTotal\tPer\tResult\n\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%s\n",s[i].sno,s[i].snm,
		s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].per,s[i].res);
	}
	
}
