#include<stdio.h>
int main()
{
	FILE *fp;
	char fnm[30];
	int i;	
	printf("Enter File name:- ");
	scanf("%s",&fnm);
	fp=fopen(fnm,"a");
	if(fp==NULL)
	{
		printf("File Not Exists..");
	}
	for(i=1;i<=5;i++)
	{
		fprintf(fp,"%d\t",i);
	}
	return 0;
}
