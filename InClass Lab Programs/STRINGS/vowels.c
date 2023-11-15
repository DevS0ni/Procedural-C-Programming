#include <stdio.h>
#include <ctype.h>

main()
{
	char s[40],ch;
	int len=0,i,c=0;

	printf("Enter Original String :");
	scnaf("[^\n]",s);

	while(s[len]!='\0') len++;

	for(i=0;i<len;i++)
	{
		ch=toupper(s[i]);
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') c++;
	}

	printf("Total Count : %d",c);

}