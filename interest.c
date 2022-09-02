//Simple interest

  #include<stdio.h>
  void main()
   {
    float p,t,r;
    printf("enetr the principle amount\n");
    scanf("%f",&p);
    printf("enter the time period in years\n");
    scanf("%f",&t);
    printf("enter the rate of interest\n");
    scanf("%f",&r);
    float SI;
    SI=(p*t*r)/100;
    printf("The simple interest for the principal amount %f and having time period of %f and having rate of interest %f is %f",p,t,r,SI);
   }
