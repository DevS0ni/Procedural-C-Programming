/*
Def: Use of pointer variable to access the memory address.
*/

#include <stdio.h>
#include<conio.h>

void main()
{
   int* p;
   int c;
   clrscr();
   c=22;
   printf("Address of c:%x\n",&c);
   printf("Value of c:%d\n\n",c);
   p=&c;
   printf("Address of pointer p:%x\n",p);
   printf("Content of pointer p:%d\n\n",*p);
   c=11;
   printf("Address of pointer p:%x\n",p);
   printf("Content of pointer p:%d\n\n",*p);
   *p=2;
   printf("Address of c:%x\n",&c);
   printf("Value of c:%d\n\n",c);
   getch();
}
