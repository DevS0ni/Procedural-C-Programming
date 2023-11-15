#include<stdio.h>
#include<stdlib.h>
int main()
{
	int price;
	char choice;
	float dis,gamt,famt;
	printf("\n ---- Menu ----\n\n");
	printf("\n s. Science book");
	printf("\n c. Commerce book");
	printf("\n a. Arts book");
	printf("\n e. Exit");
	
	printf("\n\n Enter Your Choice:- ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 's':
			printf("\n Enter Science book price:- ");
			scanf("%d",&price);
			dis=price*0.02;
			
			break;
		case 'c':
			printf("\n Enter Commerce book price:- ");
			scanf("%d",&price);
			dis=price*0.03;
			
			break;
		case 'a':
			printf("\n Enter Arts book price:- ");
			scanf("%d",&price);
			dis=price*0.04;
			
			break;
		
		case 'e':
			exit(0);
		
		default:
			printf("\n\n Invalid Choice!...");
			break;	
	}
	gamt=price-dis;
	if(gamt>200)
	{
		famt=gamt-(gamt*0.025);	
	}
	else
	{
		famt=gamt;
	}
	
	printf("\n Price:- %d",price);
	printf("\n Gross Amount:- %.2f",gamt);
	printf("\n Final Amount:- %.2f",famt);	
	
	return 0;
}
