// Find out 'a' Occurence in String

#include <stdio.h>
#include <conio.h>

void main()
{
	char s[30];
	int i,c=0;
	clrscr();

	printf("Enter a String :");
	scanf("%['^\n']",s);

	for(i=0;i<strlen(s);++i)
		{
			if(s[i]=='a')c++;
		}
	printf("a occurs %d times",c);
}