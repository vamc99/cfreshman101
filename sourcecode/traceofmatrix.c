#include<stdio.h>
int main()
{
  int r,c,sum=0;
  printf("Enter # rows and # cols\n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  printf("Enter elements into an array\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<r;i++){
    sum = sum + a[i][i]; // sum+= a[i][i]
  }
  printf("Trace of a Matrix is : %d \n",sum);
}