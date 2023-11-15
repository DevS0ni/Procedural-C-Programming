#include <stdio.h>

void main()
{
	int m[10],del,i,j,n;
	
	printf("How many elements ? ");
	scanf("%d",&n);

	print("\nEnter %d elements below\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	
	printf("Enter number to be deleted :");
	scanf("%d",&del);
	
	for(i=0;i<n;++i)
	{
		if(m[i]==del)break;
	}
	
	for(j=i;j<n;j++)
	{	
		m[j]=m[j+1];
	}
	
	n--;
	
	printf("After Deletetion\n");

	for(i=0;i<n;++i)
	{
		printf("%d\n",m[i]);
	
	}
}