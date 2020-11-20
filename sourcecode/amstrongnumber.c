#include<stdio.h>
#include<math.h>
int main(){
  int n,k=0,sum=0,r=0;
  int t1,t2;
  scanf("%d",&n);
  t1 = n;
  t2 = n;
  // sum of digits
  while(t1!=0){
    t1 = t1/10;
    k++;
  }
  //sum of digit powers of k 
  while (t2!=0)
  {
    r = t2%10;
    sum = sum + pow(r,k); // sum+=pow(r,k)
    t2 = t2/10; // t2/=10
  }
  if(sum == n){
    printf("%d is a Amstrong Number",n);
  }else{
    printf("%d is NOT a Amstrong Number",n);
  }
}