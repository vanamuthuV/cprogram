// Factorial using Recurion.
      
      #include<stdio.h>
      int fact();
      int main()
        {

          int n,res;
          scanf("%d",&n);
          res=fact(n);
          printf("%d",res);
        }

      int fact(int n)
        {
           if (n==0)
             {
              return 1;
             }

            else 
             {
              return (n*fact(n-1));
             }
             
        }