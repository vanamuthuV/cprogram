// COMPUTATION OF ROOTS

#include<stdio.h>
#include<math.h>
void main()
 {
  float a,b,c;
  float disc,d;
  printf("enter the value of a b and c\n");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
   {
    printf("INVALID ERROR!!!");
   }
   else
   {
    disc=((b*b)-4*a*c);
    d=sqrt(fabs(disc));
    float r1,r2;
    float rp,ip;
    if(disc==0)
      {
        r1=r2=(-b)/2*a;
        printf("The roots are real and equal\n");
        printf("The roots are\nr1=%f\nr2%f\n",r1,r2);
      }

    else if (disc>0)
        {
          r1=((-b)+d)/2*a;
          r2=((-b)-d)/2*a;
          printf("The roots are real and distinct\n");
          printf("The roots are\nr1=%f\nr2%f\n",r1,r2);
        }

    else
        {
          rp=(-b)/(2*a);
          ip=d/(2*a);
          printf("The roots are real and imaginary\n");
          printf("The roots are\nr1=%f+i%f\nr2%f-i%f\n",rp,ip,rp,ip);
        }
   }
   
 }
