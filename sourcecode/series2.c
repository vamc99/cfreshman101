/*
  xˆ1 + xˆ3 + xˆ5 + xˆ7 + xˆ9 + ....
*/

#include<stdio.h>
#include<math.h>
int main(){
  int x,n,sum=0;
  printf("Enter X an N: ");
  scanf("%d%d",&x,&n);
  for (int i = 0; i <n; i++)
  {
    sum = sum + pow(x,2*i + 1);
  }
  printf("Sum of serie = %d\n",sum);
}