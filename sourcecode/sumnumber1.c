/*
sum numbers upto -1
eg: 3 4 56 78 23 -1  
Alg: 
1. read val
2. check val!=-1, true goto step3 otherwise goto step7
3. add val to  sum
4. read val
5. go to step 2
6. print sum
7. end
*/
#include<stdio.h>
int main(){
  int sum=0,val;
  scanf("%d",&val);
  while(val!=-1){
    sum = sum + val;
    scanf("%d",&val);
  }
  printf("%d\n",sum);
}
// 3 4 6 8 3 4 -1  
// -1