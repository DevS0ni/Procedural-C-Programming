#include <stdio.h>

main()
{
	str len=0;
	char s[10];
	printf("Enter string :");
	scanf("%[^\n]",s);
	while(s[len]!='\0')
		{len++;}
	printf("Length : %d",len);
}