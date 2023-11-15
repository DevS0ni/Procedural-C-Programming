//calculate sine,cos,and tan values of some range .

#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
	int i,r1,r2;
	double s,c,t;

	clrscr();

	printf("THE range :\n");
	scanf("%d%d",&r1,&r2);

	for(i=r1;i<=2;i++)
	{
		s=sin((double)i);
		c=cos((double)i);
		t=tan((double)i);

		printf("\nSIN(%2d)=%4.4lf \t COS(%2d)=4.4lf\t TAN(%2d)=%4.4lf",i,s,i,c,i,t);
	}
}