#include<stdio.h>
int main(){
  int n,sum=0;
  float avg=0.0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    sum = sum + a[i];
  }
  avg = (float)sum/n;
  printf("Average of array elements = %f\n",avg);
}