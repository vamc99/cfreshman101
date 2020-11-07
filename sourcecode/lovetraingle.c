#include <stdio.h>
#include<math.h>
int main(){
  unsigned  long int num=0L,r=0L;
  unsigned long int i;
  // scanf("%lu", &num);
  //printf("Hello %lld",num);
  while(scanf("%lu", &num)){
    r=0L;i=0L;
    printf("Hello");
    while(num!=0){
      r = r + (num % 9) * pow(10,i);
      num = num/9;
      i++;
    }
    printf("%lu\n",r);
    // scanf("%lu",&num);
  }              		
}