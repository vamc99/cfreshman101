/*
find sum of n numbers(not first numbers) using while loop.
Alg: 
1. read n value
2. check n!=0, true goto step3 otherwise goto step7
3. read val
4. add val to  sum
5. decreamnet n
6. go to step 2
7. print sum
8 end
*/
#include<stdio.h>
int main(){
  int n, sum=0,val;
  printf("Enter n value: ");
  scanf("%d",&n);
  while(n!=0){
    scanf("%d",&val);
    sum = sum + val;
    n--;
  }
  printf("%d\n",sum);
}
