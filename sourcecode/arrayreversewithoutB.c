/*
using swaping
a=2,b=3
t = a -> t = 2
a = b -> a = 3
b = t -> b = 2

a[] = {1, 2, 3, 4, 5, 6}
s1 : swap(a[0] and a[5]) -> 6 2 3 4 5 1
s2 : swap(a[1] and a[4]) -> 6 5 3 4 2 1
s3 : swap(a[2] and a[3]) -> 6 5 4 3 2 1
*/

#include<stdio.h>
int main()
{
  int n,t=0;
  scanf("%d",&n);
  int a[n];
  // read array
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  // print array in reverse
  for(int i=n-1,j=0; j<i; i--,j++)
  {
    t = a[i];
    a[i] = a[j];
    a[j] = t;
  }
  for(int i=0; i<n; i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}

