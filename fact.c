// To Find The Factorial Of The Given Number

#include<stdio.h>
 void main()
   {
    int n,fact=1;
    printf("Enter a Number For Finding Factorial\n");
    scanf("%d",&n);
    while(n>=1)
      {
        fact=fact*n;
        n--;
      }
    printf("The Factorial Of Given Number Is %d\n",fact);
   }