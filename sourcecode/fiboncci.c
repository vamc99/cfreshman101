/*
  print fibonacci series upto n
  n=5
  series :    0 1 1 2 3 5
  positions : 0 1 2 3 4 5
*/
#include<stdio.h>
int main(){
  int f0=0,f1=1,f2=0,n;
  scanf("%d",&n);
  printf("0 1 ");
  for(int i=2;i<=n;i++){
    f2 = f1 + f0;
    printf("%d ",f2);
    f0 = f1;
    f1 = f2;
  }
}