#include<stdio.h>
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d", &score);

   switch( score / 10 )
   {

   case 1:
     printf("Grade: A");
     break;

   case 2:
     printf("Grade: B");
     break;

   case 3:
     printf("Grade: C");
     break;

   case 4:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;

   default:
     printf("Grade: F");
     break;

   }

   return 0;
}

