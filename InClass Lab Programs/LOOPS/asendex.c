// run time array
#include<stdio.h>
int main()
{
	int arr[50],i,size,j,temp;
	
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
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\n asending Array :- \n\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\n desending Array :- \n\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
