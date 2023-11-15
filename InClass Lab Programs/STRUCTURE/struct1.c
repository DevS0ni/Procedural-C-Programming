/* write a program to accept name,address and phone number of employee using structure and print the same. */

#include <stdio.h>
#include <conio.h>

struct emp;

void main()
{
	struct emp
	{
		char n[80];
		char address[200];
		long phone;
	};

	struct emp e;
	clrscr();
	printf("Enter the name of an employee");
	scanf("%s",e.n);
	
	printf("Enter the address of the employee");
	scanf("%s",s.address);

	printf("Enter phone number of the employee:");
	scanf("%ld",&e.phone);

	printf("Name of the employee : %s"e.n);
	printf("Address of the employee :%s",e.address);
	printf("Phone number of the employee :%ld",e.phone);
	getch();
}
}
