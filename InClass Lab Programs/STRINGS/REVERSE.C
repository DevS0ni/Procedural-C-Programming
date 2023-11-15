#include<stdio.h>
#include<conio.h>

void main()
{
	char s1[20],s2[20];
	int len,i,j;

	clrscr();

	printf("Enter a String :");
	scanf("%s",s1);
	len=0;

	while(s1[len]!='\0') {len++;}

	for(i=0,j=len-1;i<len;++i,--j)
	{
		s2[j]=s1[i];
	}

	s2[len]='\0';
	printf("Reverse String : %s",s2);


	getch();
}