#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf(“%d”,i);
		if(i==3) continue;
		printf(“ *** “);
	}
	getch();
}