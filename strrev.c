//string
  
  #include<stdio.h>
  #include<string.h>
  void main ()
    {
      char s1[20];
      printf("enter s1\n");
      gets(s1);
      strrev(s1);
      printf("the reverse of the string is %s",s1);

    }