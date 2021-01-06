#include<stdio.h>
int isValid(int i,int j,int n){
  if(i<0 || j<0 || i> n-1 || j > n-1)  // {0 <= i,j <= n-1}
    return 0;
  return 1;
}

void adjacentElement(int a[][3], int i,int j, int n){
  // row 1
  if(isValid(i-1,j-1,n))
    printf("%d ", a[i-1][j-1]);
  if(isValid(i-1,j,n))
    printf("%d ", a[i-1][j]);
  if(isValid(i-1,j+1,n))
    printf("%d ", a[i-1][j+1]);
  // row 2
  if(isValid(i,j-1,n))
    printf("%d ", a[i][j-1]);
  if(isValid(i,j+1,n))
    printf("%d ", a[i][j+1]);
  // row 3
  if(isValid(i+1,j-1,n))
    printf("%d ", a[i+1][j-1]);
  if(isValid(i+1,j,n))
    printf("%d ", a[i+1][j]);
  if(isValid(i+1,j+1,n))
    printf("%d ", a[i+1][j+1]);
}

int main(){
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d -> ",a[i][j]);
      adjacentElement(a,i,j,3);
      printf("\n");
    }
  }
}
