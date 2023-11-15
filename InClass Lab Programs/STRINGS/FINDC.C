#include <stdio.h>
#include <conio.h>

main()
{
	char s[40],c;
	int len=0,i,flag=0;
	printf("Enter Original String :");
	scanf("%[^\n]",s);

	while(s[len]!='\0') len++;
	fflush(stdin);

	printf("Enter character to scan :");
	scanf("%c",&c);

	for(i=0;i<len;i++)
	{
		if(s[i]==c)
		{
			flag=1;
			printf("%c occurs at position : %d\n",c,i+1);
		}
	}

	if(flag==0)
	{
		printf("%c does not occur in %s",c,s);
	}

}
