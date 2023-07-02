#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,b;
  clrscr();

  printf(" enter value of a=");
  scanf("%d",&a);

  printf(" enter value of b=");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("swiping value of a=%d\n",a);
  printf("swiping value of b=%d\n",b);
  getch();
  }


