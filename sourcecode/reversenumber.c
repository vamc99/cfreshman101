#include<stdio.h>
int main(){
  int n,rev=0,r=0;
  scanf("%d",&n);
  while (n!=0)
  {
    r = n%10;
    rev = rev*10+r;
    n = n/10;
  }
  printf("%d\n",rev);
}