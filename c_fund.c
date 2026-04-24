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

// 3. Set, CLear, Toggle kth Bit
#include<stdio.h>
int main()
{
  int n;
  int k;
  scanf("%d", &n);
  scanf("%d", &k);
  
  int setBit = n | (1 << k);
  int clearBit = n  & ~(1 << k);
  int toggleBit = n ^ (1 << k);
  
  printf("%d\n", setBit);
  printf("%d\n", clearBit);
  printf("%d\n", toggleBit);
  
  return 0;
}

// 4. Non repeating XOR
#include<stdio.h>
int main()
{
  int n;
  int arr[n];
  
  int res = 0;
  
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for(int i = 0; i < n; i++)
  {
     res ^= arr[i];
  }
  printf("%d\n", res);
  
  return 0;
}

// . Swap without temp
// 4. Non repeating XOR
#include<stdio.h>
int main()
{
  int x = 10;
  int y = 20;
  
  int *a = &x;
  int *b = &y;
  
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
  
  printf("%d\n", *a);
  printf("%d\n", *b);  
  return 0;
}







