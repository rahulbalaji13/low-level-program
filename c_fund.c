// 1. Count set bits 
#include<stdio.h>
int main()
{
   int n;
   int count = 0;
   scanf("%d", &n);
   while(n)
   {
     count += n & 1;
     n >>= 1;
   }
   printf("%d\n", count);
   return 0;
}

// 2. Power of 2
#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  int result = (n > 0) && ((n & (n - 1)) == 0);

  printf("%d\n", result);
}









