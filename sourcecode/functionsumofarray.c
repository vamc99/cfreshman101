#include<stdio.h>
int arraySum(int *a,int n){
  int sum = 0;
  for (int i = 0; i < n ; i++)
  {
    sum = sum + a[i];
  }
  return sum;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  int sum = arraySum(a,n);
  printf("%d",sum);
}
