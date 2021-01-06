#include <stdio.h>
#include <math.h>
int isPrime(int);
int main()
{
  int n,c=0,sum=0;
  scanf("%d", &n);
  for (int i = 2; ; i++)
  {
    if (isPrime(i))
    {
      printf("%d, ", i);// s = s + i;
      c++;
    }
    if(c==n){
      break;
    }
  }
  // printf("%d",sum);
}
int isPrime(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}