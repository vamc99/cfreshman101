/*
  swaping of two numbers, with out temp variable
  input
  a = 10
  b = 20 
  output 
  a = 20
  b = 10
*/
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter a and b : ");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("a = %d, b = %d\n",a,b);
}