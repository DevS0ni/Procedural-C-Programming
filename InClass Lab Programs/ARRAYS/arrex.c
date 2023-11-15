// run time array
#include<stdio.h>
int main()
{
	int arr[50],i,size,max,min;
	
	printf("Enter size:- ");
	scanf("%d",&size);
	printf("Enter array elements :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\n Array :- \n\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	max=min=arr[0];
	for(i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];	
		}
	}
	for(i=0;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];	
		}
	}
	printf("\n\n Maximum Number :- %d",max);
	printf("\n\n Minimum Number :- %d",min);
	return 0;
}
