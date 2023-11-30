// [1.] ASSIGNMENT-1 ARRAY OF NESTED STRUCTURE.
/* ARRAY OF NESTED STRUCTURE --> STUDENT INFORMATION */

#include<stdio.h>

struct date_of_birth
{
	int date,month,year;
};

struct student
{
	int student_num;
	char student_name[50];
	float student_percent;
	struct date_of_birth dob;
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
		printf(" * Enter Student Date Of  Birth : ");
			scanf("%d %d %d",&stud[ind].dob.date,&stud[ind].dob.month,&stud[ind].dob.year);
	}
	
	printf("\n\n ---------- STUDENT ~ DETAILS ---------- ");
	
	printf("\n\n STUDENT ID NUMBER\t STUDENT NAME\t STUDENT PERCENTAGE\t DATE OF BIRTH ");
	
	for(ind=0;ind<3;ind++)
	{
		printf("\n\n %d\t\t\t %s\t\t %.2f\t\t\t %d/%d/%d ",stud[ind].student_num,stud[ind].student_name,stud[ind].student_percent,stud[ind].dob.date,stud[ind].dob.month,stud[ind].dob.year);
	}
	
	printf("\n\n");
	
	return 0;
} 
