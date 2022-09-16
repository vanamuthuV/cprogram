// To check whether the given number is positive or negative.

#include<stdio.h>
void main()
  {
    printf("enter any non-zero number :\n");
    int n;
    scanf("%d",&n);
    if(n==0)
       {
        printf("ERROR OCCURED \nEnter a non-zero number to proceed further \n");
       }
    else
     {
       if(n<0)
         {
            printf("the given number %d is negative :)",n);
         }

      else if(n>0)
         {
            printf("the entered number %d is positive :)",n);
         }
     }
  }