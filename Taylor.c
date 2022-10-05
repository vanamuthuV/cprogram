#include<stdio.h>
#include<math.h>
  int fact(int n)
    {
       int factorial=1;
       while(n>=1)
          {
             factorial=factorial*n;
             n--;
          }
       return factorial;
    }

void main()
    {
      int x;
      printf("Enter The Value For X\n");
      scanf("%d",&x);
      float X;
      X=x*(3.14/180);
      float result;
      result=(X-(pow(X,3)/(fact(3)))+((pow(X,5))/fact(5))+((pow(X,7))/(fact(7)))+((pow(X,9))/(fact(9))));
      float result1;
      result1=(1-(pow(X,2)/fact(2))+(pow(X,4)/fact(4))+(pow(X,6)/fact(6))+(pow(X,8)/fact(8)));
      printf("\n");
      printf("The Values Using Taylor Series.\n");
      printf("\n");
      printf("The Value Of Sin%d Is %f.\n",x,result);
      printf("The Value Of Cos%d Is %f.\n",x,result1);
      printf("\n");
      printf("---------------------------------------\n");
      printf("\n");
      printf("USING BUILT-IN FUNCTION.\n");
      printf("The Value Of Sin%d Using Built-in Is %f.\n",x,sin(X));
      printf("The Value Of Cos%d Using Built-in Is %f.\n",x,cos(X));
    }


OUTPUT :

Enter The Value For X :
60

The Values Using Taylor Series.

The Value Of Sin60 Is 0.866306.
The Value Of Cos60 Is 0.504112.

---------------------------------------

USING BUILT-IN FUNCTION.
The Value Of Sin60 Using Built-in Is 0.865760.
The Value Of Cos60 Using Built-in Is 0.500460.