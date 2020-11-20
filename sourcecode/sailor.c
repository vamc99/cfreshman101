/*
  Captain want to select one sailor sailors positioned from 1 to n. 
  he is selecting even number positions until he get one sailor
  example:
  n = 9
  1: 1 2 3 4 5 6 7 8 9
  2: 2 4 6 8
  3: 4 8
  4: 8
  output: 8
*/

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