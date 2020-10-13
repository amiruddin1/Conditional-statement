#include<stdio.h>
int main()
{
      int mark;
      printf ("enter marks: ");
      scanf("%d",&mark);
      if (mark>80) 
            printf("Your Grade is A") ;
      else if (mark >70 && mark <80) 
            printf("Your Grade is B") ;
      else if (mark >60 && mark <70) 
            printf("Your Grade is C") ;
      else if (mark >50 && mark <60) 
            printf("Your Grade is D") ;
      else 
           printf("Your Grade is F") ;
      return 0;
}
