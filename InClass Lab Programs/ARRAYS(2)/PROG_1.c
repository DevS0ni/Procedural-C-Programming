/* [1.] COMPILE TIME 1-D ARRAY */

#include<stdio.h>
int main()
{
	printf("\n\n  * COMPILE TIME ARRAY *\n\n");
	printf("---------------------------------------------------------\n\n");
	
	int ind,arr[5]={10,20,30,40,50};
	printf(" --> Required all Array elements = ");
	
	for(ind=0;ind<5;ind++)
	{
		printf("%d ",arr[ind]);
	}
	printf("\n\n");
	return 0;
}
