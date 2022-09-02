// Electricity Bill

#include<stdio.h>
 void main()
  {
    char name[20];
    int units;
    float charges;
    printf("enter the name of the consumer \n");
    scanf("%s",name);
    printf("enter the units consumed by %s\n",name);
    scanf("%d",&units);

    if(units<=200)
      {
        charges=100+units*0.8;
      }
    else if (units<=300)
    {
        charges=100+(200*0.8)+((units-200)*0.9);
    }
    else
      {
        charges=100+(200*0.8)+(100*0.9)+((units-300))*1.0;
      }

     if(charges>=400)
       {
        charges=charges+charges*0.15;
       }

       printf(" THE CUSTOMER IS : %s\n",name);
       printf(" THE UNITS CONSUMED IS : %d\n",units);
       printf(" THE CHARGE IS %f Rupees\n",charges);
  }