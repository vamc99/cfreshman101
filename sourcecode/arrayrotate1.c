#include<stdio.h>
int main(){
  int n,r;
  scanf("%d",&n);
  int a[n],b[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&r);
  if(r>n)
    r = r%n;
  for(int i=0,j=0 ;i<n;i++,j++){
    b[j] = a[(i+r)%n];
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",b[i]);
  }
}