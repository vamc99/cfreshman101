/*
  a =  {1, 2, 3, 4, 5, 6, 7, 8 }
  b =  {8, 7, 6, 5, 4, 3, 2, 1}
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
  // print array in reverse
  for(int i=n-1,j=0; i>=0 && j<n; i--,j++)
  {
    b[j] = a[i];
  }
  for(int i=0; i<n; i++)
  {
    printf("%d ",b[i]);
  }
  return 0;
}

