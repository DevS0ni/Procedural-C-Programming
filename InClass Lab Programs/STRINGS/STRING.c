#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int ch,len;
	char str1[20],str2[20];
	clrscr();
	cout<<"----STRING MENU-----"<<endl;
	cout<<"1 String Len"<<endl;
	cout<<"2 String Cmp"<<endl;
	cout<<"3 String Copy"<<endl;
	cout<<"4 String Concat"<<endl;
	cout<<"5 String Rev"<<endl;
	cout<<"6 String upper Case"<<endl;
	cout<<"7 String Lower Case"<<endl;
	cout<<"8 Exit"<<endl;
	cout<<"Enetr Your Chioc:-";
	cin>>ch;
	cout<<"Enetr String1:-";
	cin>>str1;
	cout<<"Enetr String2:-";
	cin>>str2;

	switch(ch)
	{
		case 1:
			len=strlen(str1);
			cout<<"String Length:-"<<len;
		break;

		case 2:
			if(strcmp(str1,str2)==0)
			{
				cout<<"Both String Match";
			}
			else
			{
				cout<<"Both String Not Match";
			}
		break;

		case 3:
			strcpy(str2,str1);
			cout<<"String Copy:-"<<str2;
		break;

		case 4:
			strcat(str1,str2);
			cout<<"String Concate:-"<<str1<<str2;
		break;

		case 5:
			strrev(str1);
			cout<<"String rev:-"<<str1;
		break;

		case 6:
			strupr(str1);
			cout<<"String Upper Case:-"<<str1;
		break;

		case 7:
			strlwr(str1);
			cout<<"String Lower Case:-"<<str1;
		break;

		case 8:
			exit(0);
		break;

		default:
			cout<<"Not Match String Menu";
		break;

	}
	getch();
}