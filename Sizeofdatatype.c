// Size Of DataTypes !

#include<stdio.h>
void main()
   {
      int a;
      float b;
      char c;
      double d;
      long double e;
      printf("\n");
      printf("The Size Of \"Integer\" Is %zu.\n\n",sizeof(a));
      printf("The Size Of \"Float\" Is %zu.\n\n",sizeof(b));
      printf("The Size Of \"Character\" Is %zu.\n\n",sizeof(c));
      printf("The Size Of \"Double\" Is %zu.\n\n",sizeof(d));
      printf("The Size Of \"Long Double\" Is %zu.\n\n",sizeof(e));
   }

/*
OUTPUT :


The Size Of "Integer" Is 4.

The Size Of "Float" Is 4.

The Size Of "Character" Is 1.

The Size Of "Double" Is 8.

The Size Of "Long Double" Is 12.

*/