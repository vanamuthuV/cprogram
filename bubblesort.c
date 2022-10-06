// Bubble Sort

#include<stdio.h>
void main()
   {
      int i,j;
      int temp=0;
      printf("Enter The Number Of Elements\n");
      int n;
      scanf("%d",&n);
      printf("\n");
      int a[n];
      printf("Enter The Elements\n");
      printf("\n");
      for(i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
       }

      printf("\n");
      
       // Printing The Elements !

      printf("The Given Elements Are :\n");
      printf("\n");
      for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
      printf("\n");

       // Sorting Operation !

       for(i=0;i<n;i++)
           {
            for(j=0;j<n;j++)
                {
                  if(a[j]>a[j+1])
                      {
                         // Swapping
                         temp=a[j];
                         a[j]=a[j+1];
                         a[j+1]=temp;
                      }
                }
           }

      printf("\n");

      // Printing The Sorted Elements !

      printf("The Sorted Elements Are :\n");
      printf("\n");
      for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
   }


/*
OUTPUT :

Enter The Number Of Elements
7

Enter The Elements

3487 3726 487 4587 23657 3209 1267

The Given Elements Are :

3487    3726    487     4587    23657   3209    1267

The Sorted Elements Are :

487     1267    3209    3487    3726    4587    23657

*/