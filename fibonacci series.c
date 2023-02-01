#include<stdio.h>
int fib(int a)
{
   if (a <= 1)
      return a;
   return fib(a-1) + fib(a-2);
}
 int main()
{
   int num, a = 0, i;
   printf("Enter number of terms:");
   scanf("%d",&num);
 for ( i = 1 ; i <= num ; i++ )
   {
      printf("%d\n",fib(a));
    a++; 
   }
}

