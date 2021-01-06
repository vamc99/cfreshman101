/*
  x + xˆ3/3! + xˆ5/5! + xˆ7/7!...
*/

#include<stdio.h>
int power(int,int);
int factorial(int);
int main()
{
 int x,n;
 scanf("%d%d",&x,&n);
 float sum=0.0;
 for(int i=1,k=1;i<=n;i++,k=k+2)
 {
   sum += (float)power(x,k) / factorial(k);
 }
 printf("sum = %f",sum);
}
int power(int x,int n){
  int res=1;
  for(int i=1;i<=n;i++){
    res = res*x;
  }
  return res;
}
int factorial(int n){
  int fact = 1;
  for(int i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}
