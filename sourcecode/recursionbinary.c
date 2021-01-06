#include<stdio.h>
int binary(int);
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",binary(n));
}
int  binary(int n)
{
  if(n==0)
    return 0;
  return (n%2 + 10 * binary(n/2));
}