#include<stdio.h>
#include<math.h>
#include<time.h>
int isPrime(int);
int main(){
  int n,flag=0;
  scanf("%d",&n);
  for (int i = 2; i <=n/2 ; i++){
    if(n%i==0){
        flag = 1;
        break;
    }
  }
  if(flag==1){
    printf("%d Is a not Prime Number\n",n);
  }else{
    printf("%d Is a Prime Number\n",n);
  }
  
}