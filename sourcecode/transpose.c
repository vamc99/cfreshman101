#include<stdio.h>
int main()
{
  int n,t;
  printf("Enter size of square matrix\n");
  scanf("%d",&n);
  int a[n][n],b[n][n];
  printf("Enter Matrix values\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  // for(int i=0;i<n;i++)
  // {
  //   for(int j=0;j<n;j++)
  //   {
  //     b[j][i] = a[i][j];
  //   }
  // }
  // Transpose of a matrix
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      t = a[i][j];
      a[i][j] = a[j][i];
      a[j][i] = t;
    }
  }
  printf("Transpose of a Matrix\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}