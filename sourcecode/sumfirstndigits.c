/* 
  sum of first n digits
  n = 10
  1+2+3+4+5+6+7+8+9+10 = 55
  the sum of n natural numbers= n*(n+1)/2
*/
#include<stdio.h>
int main(){
  int n,sum;
  printf("Enter N value:");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  printf("%d",sum);
}
