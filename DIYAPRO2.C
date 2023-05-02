#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;
   clrscr();
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   printf("Enter the value of c:");
   scanf("%d",&c);
   if(a<0)
   {
   printf("the first number is negative");
   }
   else if(a>0)
   {
   printf("The second number is positive");
   }
   else if(a=0)
   {
   printf("The third number is neutral");
   }
   getch();
   }
