//4)	Function with arguments and return value
#include<stdio.h>
int add(int,int);			// function declaration
int add(int n1,int n2)			// function defination
{
	//printf("\n Addition:- %d",n1+n2);
	return n1+n2;
}
char fun2(char ch)
{
	//printf("\n Character:- %c",ch);
	return ch;
}
float fun3(float f1)
{
	//printf("\n float:- %f",f1);
	return f1;
}
int main()
{
	int x,y;
	printf("Enter two numbers:- ");
	scanf("%d %d",&x,&y);
	printf("\n function called...");
	/*add(x,y);
	fun2('v');
	fun3(56.3);*/
	printf("\n Addition :- %d",add(x,y));					
	printf("\n Character:- %c",fun2('b'));
	printf("\n float:- %f",fun3(56.32));
	return 0;
}

