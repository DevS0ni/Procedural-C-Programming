//write a program to initialize values to all members of the structure 
#include <stdio.h>
#include <conio.h>

void main()
{
	struct item
	{
		char n[80];
		int qty;
		float rate,price;
	}i={"pen",3,10.5,31.5};
	
	printf("\nName of the item : %s",i.n);
	printf("\nQuantity of the item %d",i.qty);
	printf("\nRate		%f",i.rate);
	printf("\nPrice		%f",i.price);
	
	getch();
}