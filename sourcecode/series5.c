/*
  x + xˆ2/2 ! + xˆ3/3! + xˆ4/4! + ...
*/
#include<stdio.h>
#include<math.h>
int main(){
  int x,n,fact=1,i;
  float sum=0.0;
  scanf("%d%d",&x,&n);
  for ( i = 1; i <=n; i++)
  {
     fact = fact * i;
     sum = sum + (float) pow(x,i)/fact;
  }
  printf("%f",sum);
}