/*
Bubble Sort
*/
#include<stdio.h>
int main(){
  int n,t=0;
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);  
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0;j < n-i-1; j++){
      if(a[j]>a[j+1])  // swap a[j], a[j+1]
      {
        t = a[j];       // t = a
        a[j] = a[j+1];  // a = b
        a[j+1] = t;     // b = t
      }
    }
  }
  for(int i=0; i<n;i++){
    printf("%d  ",a[i]);
  }
  printf("\n");
}