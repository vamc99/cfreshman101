#include<stdio.h>
int factorial(int);
int main()
{
  int n;
  scanf("%d",&n);
  int fact = factorial(n);
  printf("%d! = %d\n",n,fact);
}
int factorial(int n){
  int fact = 1;
  for (int i = 1; i <=n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
