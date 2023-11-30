#include<stdio.h>
int main()
{
	FILE *fp;
	char fnm[30];
	int sno,i;
	char snm[20],d;
	
	printf("Enter File name:- ");
	scanf("%s",&fnm);
	
	fp=fopen(fnm,"w+");
	if(fp==NULL)
	{
		printf("File Not Exists..");
	}
	for(i=1;i<=3;i++)
	{
		printf("Enter Student No:- ");
		scanf("%d",&sno);
		printf("Enter Student name:- ");
		scanf("%s",snm);
		fprintf(fp,"%d\t%s\n",sno,snm);
	}
	//printf("\ntell:- %d",ftell(fp));
	fseek(fp,0,SEEK_SET);    // file pointer set to at beginning
	//printf("\ntell:- %d",ftell(fp));
	printf("\nNo\tName\n");
	while((d=fgetc(fp))!=EOF)
	{
		printf("%c",d);
	}
	return 0;
	
}
