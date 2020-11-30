#include<stdio.h>
int main(){
  int n,c=0,a[20],r=0;
  scanf("%d",&n);
  while(n!=0){
    a[c] = n%2;
    n = n/2;
    c++;
  }
  for(int i=c-1;i>=0;i--){
    printf("%d",a[i]);
  }
  printf("\n");
}