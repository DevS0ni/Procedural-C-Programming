// 3.	Count number of words, vowels (a,e,i,o,u,), 
//digits and white spaces present in the line of text.

#include<stdio.h>
int main()
{
	char s[50],i,v=0,a=0,d=0,sp=0;
	
	printf("Enter String:- ");
	gets(s);
	
	printf("\n String :- %s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			v++;
		}
		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
		{
			a++;
		}
		if(s[i]>='0' && s[i]<='9')
		{
			d++;
		}
		if(s[i]==' ')
		{
			sp++;
		}
	}
	printf("\n Noo of Vowels :- %d",v);
	printf("\n No of Alphabets :- %d",a);
	printf("\n No of digits :- %d",d);
	printf("\n No of Spaces:- %d",sp);
	printf("\n No of Words:- %d",sp+1);
	
	return 0;
}
