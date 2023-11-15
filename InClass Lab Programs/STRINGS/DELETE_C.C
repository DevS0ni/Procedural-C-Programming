#include<stdio.h>
#include<conio.h>

void main()
{
	char s[40],d,store[40];
	int len=0,i,k=0;

	printf("Enter Original String :");
	scanf("%[^\n]",s);

	while(s[len]!='\0') len++;
	fflush(stdin);

	printf("Enter Character to delete :");
	scanf("%c",&d);

	for(i=0;i<len;++i)
	{
		if(s[i]!=d)
		{
			store[k++]=s[i];
		}
	}
	printf("%s",store);
}
