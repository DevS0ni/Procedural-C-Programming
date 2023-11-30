/* [2.] RUN TIME 1-D ARRAY */

#include<stdio.h>
int main()
{
	printf("\n\n  * RUN TIME ARRAY  *  \n\n");
	printf("------------------------------------------------------");
	
	int ind,arr[10],size;
	
	printf("\n\n * Enter the size for Array = ");
		scanf("%d",&size);
		
	printf("\n\n * Enter all the elements for Array = ");
	
	for(ind=0;ind<size;ind++)
	{
		scanf("%d",&arr[ind]);
	}
	printf("\n\n=====================================================\n\n");
	printf(" --> All the entered Array elements = ");
	
	for(ind=0;ind<size;ind++)
	{
		printf("%d ",arr[ind]);
	}
	printf("\n\n");
	return 0;
}
