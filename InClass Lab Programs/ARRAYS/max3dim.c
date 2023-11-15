//program to find maximum within 3*3 matrix

#include<stdio.h>

void main()
{
	int a[3][3],i,j,big;
	printf("\Enter the elements of matrix \n");;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		} 
	}
	
	big=a[0][0];
	
	printf("\n The inputed matrix is as follows : \n");

	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=1;j<=3;j++)
		{
			printf("	%d",a[i][j]);			
		}
	}

	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=1;j<=3;j++)
		{
			if(a[i][j]>big)			
			big=a[i][j];
		}printf("\n");
	}

	printf("\n Largest number in the matrix=%d",big);
}
