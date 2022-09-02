//Palindrome

 #include<stdio.h>
 void main()
  {
    int n,r,temp,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
     {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
     }

     if(sum==temp)
      {
        printf("the given number is palindrime\n");
      }
      else 
      {
      printf("the number is not palindrime\n");
      }
  }