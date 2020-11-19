/*
  1! + 2! + 3! + 4! + 5! .....
*/

#include<stdio.h>
int main(){
  int n,fact=1,i,sum=0;
  scanf("%d",&n);
  for ( i = 1; i <=n; i++)
  {
     fact = fact * i;
     sum = sum + fact;
  }
  printf("%d",sum);
}