// All String Built-In Function In One !

#include<stdio.h>
#include<string.h>
void main()
   {
      char string1[20],string2[20];
      printf("Enter The String1\n");
      gets(string1);

      // String Copy 

      strcpy(string2,string1);
      printf("\n");
      printf("The String2 Using \"Strcpy\" function is : \n%s\n",string1);
      printf("\n");
      printf("Enter The String2\n");
      gets(string2);

      // String length 

      int len1,len2;
      
      len1=strlen(string1);
      len2=strlen(string2);

      printf("\n");
      printf("The length Of The String Using \"strlen\" Is \nString1=%d\nString2=%d\n",len1,len2);
      printf("\n");

      // String Compare
      printf("String Compare : \n");
      printf("\n");
      if(strcmp(string1,string2)==0)
          {
            printf("The Strings %s and %s Are \"Equal\"\n",string1,string2);
          }

      else
         {
           printf("The Strings %s and %s Are \"Not Equal\"\n",string1,string2);
         }

      // String Concatenation

      strcat(string1,string2);
      printf("\n");
      printf("The Concatenated String Is %s\n",string1);

      // Upper To Lower

      strlwr(string1);
      strlwr(string2);

      printf("\n");
      printf("The Upper Case To Lower Case Using \"Strlwr\" Are :\nString1=%s\nString2=%s\n",string1,string2);

      // Lower To Upper

      strupr(string1);
      strupr(string2);

      printf("\n");
      printf("The Lower Case To Upper Case Using \"Strupr\" Are :\nString1=%s\nString2=%s\n",string1,string2);

      // String Reverse

      strrev(string1);
      strrev(string2);

      printf("\n");
      printf("The Reverse Of Strings Are :\nString1=%s\nString2=%s\n");
   }


/*
OUTPUT :

Enter The String1
bangalore

The String2 Using "Strcpy" function is : 
bangalore

Enter The String2
city

The length Of The String Using "strlen" Is 
String1=9
String2=4

String Compare : 

The Strings bangalore and city Are "Not Equal"

The Concatenated String Is bangalorecity

The Upper Case To Lower Case Using "Strlwr" Are :
String1=bangalorecity
String2=city

The Lower Case To Upper Case Using "Strupr" Are :
String1=BANGALORECITY
String2=CITY

The Reverse Of Strings Are :
String1=YTICEROLAGNAB
String2=YTIC

*/