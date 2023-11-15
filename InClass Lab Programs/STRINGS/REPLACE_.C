#include<Stdio.h>
#include <conio.h>

void main()
{
	char s[40],c,r;
	int len=0,i,flag=0;
	clrscr();
	printf("Enter String :");
	scanf("%[^\n]",s);

	while(s[len]!='\o') len++;

	fflush(stdin);

	printf("Enter which character you want to replace :");
	scanf("%c",&c);

	fflush(stdin);

	printf("Enter new CHaracter :");
	scanf("%c",&r);

	for(i=0;i<len;++i)
	{
		if(s[i]==c){s[i]=r;}
	}
	printf("%s",s);
}