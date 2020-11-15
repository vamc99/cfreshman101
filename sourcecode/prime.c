#include<stdio.h>
#include<math.h>
#include<time.h>
int isPrime(int);
int main(){
  int n,count=1;
  scanf("%d",&n);
  time_t curtime;
  time(&curtime);
  printf("%s",ctime(&curtime));
  for (int i = 1; i <=n ; i++){
    if(n%i==0){
      count++;
    }
  }
  time(&curtime);
  printf("%s",ctime(&curtime));
  if(count==2){
    printf("%d Is a Prime Number\n",n);
  }else{
    printf("%d Is Not a Prime Number\n",n);
  }
}