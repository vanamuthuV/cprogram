//linear search
    
    #include<stdio.h>
     void main()
      {
        int n;
        printf("the total\n");
        scanf("%d",&n);
        int i;
        int a[n];
        printf("elements :\n");
        for(i=0;i<n;i++)
          {
            scanf("%d",&a[i]);
          }
        printf("key ?\n");
        int key;
        scanf("%d",&key);
        int j;
        int pos;
        for(i=0;i<n;i++)
          {
            if(key==a[i])
              {
                pos=i+1;
                 
              }
          }

          if(key==a[i])
            {
            printf(";ocation is %d",pos);
            }
          else
            {
              printf("Serch unsuceesfull\n");
            }

      }