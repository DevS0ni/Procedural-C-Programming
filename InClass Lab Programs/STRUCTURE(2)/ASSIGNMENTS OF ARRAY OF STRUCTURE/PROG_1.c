// [1.] ASSIGNMENT-1 ARRAY OF STRUCTURE.
/* ARRAY OF STRUCTURE --> STUDENT INFORMATION */

#include<stdio.h>
struct student
{
	int student_num;
	char student_name[50];
	float student_percent;
}stud[5];

int main()
{
	int ind;
	
	printf("\n\n ---------- FILL UP THE STUDENT DETAILS ---------- ");
	
	for(ind=0;ind<3;ind++)
	{
		printf("\n\n * Enter Sudent ID Number : ");
			scanf("%d",&stud[ind].student_num);
		printf(" * Enter Student Name : ");
			scanf("%s",&stud[ind].student_name);
		printf(" * Enter Student Percentage : ");
			scanf("%f",&stud[ind].student_percent);
	}
	
	printf("\n\n ---------- STUDENT ~ DETAILS ---------- ");
	
	printf("\n\n STUDENT ID NUMBER\t STUDENT NAME\t STUDENT PERCENTAGE ");
	
	for(ind=0;ind<3;ind++)
	{
		printf("\n\n %d\t\t\t %s\t\t %.2f ",stud[ind].student_num,stud[ind].student_name,stud[ind].student_percent);
	}
	
	printf("\n\n");
	
	return 0;
}
