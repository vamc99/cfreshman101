#include<stdio.h>
int factorial(int);
int main()
{
  printf("%d",factorial(5));
}
int factorial(int n)
{
  if(n == 0 || n == 1)
    return 1;
  return n * factorial(n-1); 
}