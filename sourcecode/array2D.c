/*
  reading and printing 2D arrays
*/
#include<stdio.h>
int main()
{
  int r,c;
  printf("Enter # rows and # cols\n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  printf("Enter elements into an array\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Array elements are\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}