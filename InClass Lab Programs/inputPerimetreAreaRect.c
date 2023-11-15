#include<stdio.h>
int main()
{
	int area,perimeter,height,width;
	printf("Enter the value of height:");
	scanf("%d",&height);
	printf("\nEnter the value of width:");
	scanf("%d",&width);
	perimeter=2*(height+width);
	printf("perimeter=%d",perimeter);
	area=height*width;
	printf("\nArea=%d",area);
	return 0;
}
