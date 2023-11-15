#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	
	printf("Enter string1:- ");
	gets(s1);
	printf("Enter string2:- ");
	gets(s2);

	printf("\n Reverese string :- %s",strrev(s1));
	printf("\n Upper case :- %s",strupr(s2));
	printf("\n lower case :- %s",strlwr(s2));
	return 0;
}
