/*
  Left rotation 
  read n 
  a = {1,2,3,4,5}
  rotate 2
  output
  {3,4,5,1,2}
*/
#include<stdio.h>
int main(){
  int n,r;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&r);
  int b[r],c[n];
  for(int i=0;i<r;i++){
    b[i] = a[i];
  }
  for(int i=r,j=0; i<n;i++,j++){
    c[j]=a[i];
  }
  for(int i=0,j = n-r;i<r;i++,j++){
	  c[j] = b[i];
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",c[i]);
  }
}