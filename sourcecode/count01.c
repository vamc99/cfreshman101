/*
  count how many zeros and ones in a given array
  8
  1 1 1 0 0 0 1 1 
  contraint is : Ai contains 0's and 1's
*/
#include<stdio.h>
int main(){
  int n,count_0 = 0,count_1 = 0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    if(a[i]==0){
      count_0++;
    }
    // if(a[i]==1){
    //   count_1++;
    // }
  }
  count_1 = n - count_0; 
  printf("Zeros Count = %d\n",count_0);
  printf("Ones Count = %d\n",count_1);
}
