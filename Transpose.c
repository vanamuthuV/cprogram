//Trnspose Of Matrix

#include<stdio.h>
void main()
    {
      int row,col;
      int a[10][10],t[10][10];
      printf("Enter The Number Of Rows Of Matrix :\n");
      scanf("%d",&row);
      printf("\n");
      printf("Enter The Number Of Columns Of Matrix :\n");
      scanf("%d",&col);
      printf("\n");
      printf("Enter The Elements Of The Matrix :\n");
        int i,j;

          for(i=0;i<row;i++)
              {
               for(j=0;j<col;j++)
                  {
                     scanf("%d",&a[i][j]);
                  }
              }
      printf("\n");

      printf("The Given Matrix Is :\n");
      printf("\n");
      printf("\n");
         for(i=0;i<row;i++)
              {
               for(j=0;j<col;j++)
                   {
                     printf("%d\t",a[i][j]);
                   }
               printf("\n");
              }

      //Trnspose Operation !!

        for(i=0;i<row;i++)
             {
               for(j=0;j<col;j++)
                  {
                     t[j][i]=a[i][j];
                  }
             }

      printf("\n");
      printf("The Transpose Of The Given Matrix Is :\n");
      printf("\n");
         for(i=0;i<col;i++)
              {
               for(j=0;j<row;j++)
                  {
                     printf("%d\t",t[i][j]);
                  }
               printf("\n");
              }
          
    }


OUTPUT :

/*Enter The Number Of Rows Of Matrix :
3

Enter The Number Of Columns Of Matrix :
4

Enter The Elements Of The Matrix :
1 2 3 4 5 6 7 8 9 10 11 12

The Given Matrix Is :


1       2       3       4
5       6       7       8
9       10      11      12

The Transpose Of The Given Matrix Is :

1       5       9
2       6       10
3       7       11
4       8       12*/