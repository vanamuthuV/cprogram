// swapping of two numbers using pointers

#include<stdio.h>
void main()
  {
   int a,b,*c,*d;
   printf("enter the value of A and B \n");
   scanf("%d%d",&a,&b);
   int sum;
   c=&a;
   d=&b;
   int temp;
   temp=*c;
   *c=*d;
   *d=temp;
   printf("the a and b is %d and %d",a,b);
  }
