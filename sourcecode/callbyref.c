#include<stdio.h>
void  swap(int *a,int *b){
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  swap(&a,&b); // call by reference a=3 b=5
  printf("a : %d , b : %d\n",a,b);
}

// *n1 -> value at address 100
// *n2 -> value at address 120