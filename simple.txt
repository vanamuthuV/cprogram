// Simulation of calculator

#include<stdio.h>
void main()
 {
  float quotient,a,b,sum,difference,product;
  int remainder;
  printf("enter thr value of a \n");
  scanf("%f",&a);
  printf("enter the value of b\n");
  scanf("%f",&b);
  printf("ENTER THE CHOICE\n");
  int choice;
  scanf("%d",&choice);
  switch (choice)
    {
      case 1 : sum=a+b;
            printf("THE SUM IS = %f",sum);
            break;

      case 2 : difference = a-b;
             printf("THE DIFFERENCE IS = %f",difference);
             break;

      case 3 : product = a*b;
            printf("THE PRODUCT IS = %f",product);
            break;

      case 4 : quotient = a/b;
             printf("THE QUATIENT IS = %f",quotient);
             break;

      case 5 : remainder= (int)a%(int)b;
              printf("THE REMAINDER IS = %d",remainder);
              break;

      default :
              printf("INVALID ERROR !!!!!!");

    }
 }