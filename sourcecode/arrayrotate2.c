#include<stdio.h>
int main(){
  int n,r;
  scanf("%d",&n);
  int a[n],t;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&r);
  if(r>n)
    r = r%n;
  for(int i=0;i<r;i++){
    t= a[0];
    for(int j=0;j<n;j++){
      a[j] = a[j+1];
    }
    a[n-1] = t;
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}