#include<stdio.h>
int main()
{
	FILE *fp;
	char d[10],d1[30];
	fp=fopen("file1.txt","w");	
	if(fp==NULL)
	{
		printf("\n File Not exists...");
	}
	fprintf(fp,"Helloo...");
	fprintf(fp,"\nHow are you?");
	fclose(fp);	
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("\n File Not exists...");
	}
	fscanf(fp,"%s",d);
	fscanf(fp,"%s",d1);
	printf("\n File data :- %s \n %s",d,d1);
	return 0;
	
}
