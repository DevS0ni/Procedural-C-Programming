#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],ans[5][5],r,c,i,j;
	printf("Enter no of row:- ");
	scanf("%d",&r);
	printf("Enter no of column:- ");
	scanf("%d",&c);
	printf("\n\nEnter 1st array Elements:- ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\nEnter 2nd array Elements:- ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\naddition 2D array:- \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
