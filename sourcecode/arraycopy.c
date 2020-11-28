/*
  copy array from A to B
*/
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],b[n];
  // read array
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  // copy array
  for(int i=0;i<n; i++)
  {
    b[i] = a[i];
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",b[i]);
  }
  return 0;
}

