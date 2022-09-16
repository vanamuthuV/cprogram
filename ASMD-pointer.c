//ADDITION SUBTRACTION MULTIPLICATION DIVISION using pointer

#include<stdio.h>
void main()
  {
   float a,b,*c,*d,sum,sub,mul,div;
   printf("entert he value of A and B\n");
   scanf("%f%f",&a,&b);
   c=&a;
   d=&b;
   printf("------ADDITION------\n");
   sum=*c+*d;
   printf("THE SUM IS %f\n",sum);
   printf("------SUBTRACTION------\n");
   sub=*c-*d;
   printf("THE SUB IS %f\n",sub);
   printf("------MULTIPLICATION------\n");
   mul=(*c)*(*d);
   printf("THE MUL IS %f\n",mul);
   printf("------DIVISION------\n");
   div=(*c)/(*d);
   printf("THE DIV IS %f\n",div);
  }