#include <stdio.h>
#include <conio.h.>

void main()
{
	int m[10],i,pos=0,neg=0,zero=0,n;
	clrscr();
	printf("How Many Numbers ?");
	scanf("%d",&n);
	
	printf("Enter %d integer elements \n");
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&m[i]);
		if(m[i]>0)
			pos++;
		else if(m[i]<0)
			neg++;
		else zero++;
	}
		
printf("Positive Numbers =  %d",pos);
printf("Negative Numbers =  %d",neg);
printf("Zero Numbers =  %d",zero);
getch();
}