// find min adjacent element in matrix
//sum of adjcent elements in matrix
#include<stdio.h>
#include<limits.h>
int isValid(int i,int j,int n){
  if(i<0 || j<0 || i> n-1 || j > n-1)  // {0 <= i,j <= n-1}
    return 0;
  return 1;
}

void adjacentElement(int a[][3], int i,int j, int n){
  int min = INT_MAX;
  // int max = INT_MIN;
  
  // if(isValid(i-1,j-1,n)){
  //   if(min > a[i-1][j-1])
  //     min = a[i-1][j-1];
  //   if(max < a[i-1][j-1])
  //     max = a[i-1][j-1];
  // }
  // row 1
  if(isValid(i-1,j-1,n) && min > a[i-1][j-1])
    min = a[i-1][j-1];
  if(isValid(i-1,j,n) && min > a[i-1][j])
    min  = a[i-1][j];
  if(isValid(i-1,j+1,n) && min > a[i-1][j+1])
    min = a[i-1][j+1];
  // row 2
  if(isValid(i,j-1,n) && min > a[i][j-1])
    min = a[i][j-1];
  if(isValid(i,j+1,n) && min > a[i][j+1] )
    min = a[i][j+1];
  // row 3
  if(isValid(i+1,j-1,n) && min > a[i+1][j-1])
    min = a[i+1][j-1];
  if(isValid(i+1,j,n) && min > a[i+1][j])
    min = a[i+1][j]; 
  if(isValid(i+1,j+1,n) && min > a[i+1][j+1])
    min = a[i+1][j+1];
  
  printf("%d",min);
  // printf("min = %d, max = %d",min,max);
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