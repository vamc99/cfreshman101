/*
  1 - xˆ1 + xˆ2 - xˆ3 + xˆ4 - xˆ5 + ....
*/

#include<stdio.h>
#include<math.h>
int main(){
  int x,n,sum = 0,sign = 1;
  printf("Enter X an N: ");
  scanf("%d%d",&x,&n);
  for (int i = 0; i <= n; i++)
  {
      sum = sum + sign * pow(x,i);
      sign = -1 * sign;
  }
  // for (int i = 0; i <= n; i++)
  // {
  //     if(i%2==0)
  //       sum = sum + pow(x,i);
  //     else
  //       sum = sum - pow(x,i);
  // }
  printf("Sum of serie = %d\n",sum);
}