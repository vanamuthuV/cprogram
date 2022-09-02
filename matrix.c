//Multiplication of matrix

#include<stdio.h>
void main()
 {
  int a[20][20],b[20][20],c[20][20],i,j,k,m,n,p,q;
  printf("enter the row and column of mat A\n");
  scanf(" %d%d",&m,&n);
  printf("enter the elements of mat A\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
       {
        scanf(" %d",&a[i][j]);
       }
    }
  printf("enter the row and column of mat B\n");
  scanf(" %d%d",&p,&q);
  printf("enter the elements of mat B\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
       {
        scanf(" %d",&b[i][j]);
       }
    }

  if(n!=p)
    {
      printf("Matrixes are incompaetable\n");
    }
  else
    {

      for(i=0;i<m;i++)
        {
          for(j=0;j<q;j++)
            {
              c[i][j]=0;
              for(k=0;k<n;k++)
                {
                  c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        printf("The given matrix A is :\n");
        for(i=0;i<m;i++)
          {
              for(j=0;j<n;j++)
               {
                  printf(" %d\t",a[i][j]);
               }
               printf("\n");
          }

         printf("The given matrix B is :\n");
         for(i=0;i<p;i++)
          {
              for(j=0;j<q;j++)
               {
                  printf(" %d\t",b[i][j]);
               }
               printf("\n");
          }

         printf("The product of two matrix is : \n");
         for(i=0;i<m;i++)
          {
              for(j=0;j<q;j++)
               {
                  printf(" %d\t",c[i][j]);
               }
               printf("\n");
          }
    }
 }
