/*
  print fibonacci series upto n
  n=5
  8
  n=10
  89
*/
#include<stdio.h>
int main(){
  int f0=0,f1=1,f2=0,n;
  scanf("%d",&n);
  if(n<2){
    printf("1");
  }
  else
  {
    for(int i=2;i<=n;i++){
      f2 = f1 + f0;
      f0 = f1;
      f1 = f2;
    }
    printf("%d",f2);
  }
}