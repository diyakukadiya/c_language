#include<stdio.h>
#include<conio.h>
main()
{
  int x,y,ans;
  clrscr();

  printf("enter the value of x :");
  scanf("%d",&x);

  printf("enter theb value of y :");
  scanf("%d",&y);

  ans=(x*x) - (2*x*y) - (y*y);
  printf("(x-y)^2 is : %d",ans);


  getch();
}