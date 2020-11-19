#include<stdio.h>
#include<math.h>
int main(){
  int x,n,sum=0;
  printf("Enter X an N: ");
  scanf("%d%d",&x,&n);
  for (int i = 1; i <=n; i++)
  {
    sum = sum + pow(x,i);
  }
  printf("Sum of serie = %d\n",sum);
}