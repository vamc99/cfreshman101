#include<stdio.h>
#include<math.h>
int fib(int n){
  // if(n == 0 || n == 1)
  //   return 1;
  // return fib(n-1) + fib(n-2);
  double phi = (1 + sqrt(5)) / 2.0; 
  return round(pow(phi, n) / sqrt(5)); 
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
}
