#include<stdio.h>
#include<math.h>
int main(){
  int n,k;
  scanf("%d",&n);
  while (pow(2,k) <= n)
  {
    k++;
  }
  printf("%d",pow(2,k-1));
  
}