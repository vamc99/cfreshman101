#include<stdio.h>
int main(){
  int n,sum=0,i=1;
  scanf("%d",&n);
  while (i<=n/2)
  {
    if(n%i==0){
      sum = sum+i;
    }
    i++;
  }
  if(n==sum){
    printf("%d perfect number",n);
  }else{
    printf("%d not perfect number",n);
  }
    
}