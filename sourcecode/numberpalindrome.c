#include<stdio.h>
int main(){
  int n,rev=0,r=0,temp=0;
  scanf("%d",&n);
  temp = n;
  while (n!=0)
  {
    r = n%10;
    rev = rev*10+r;
    n = n/10;
  }
  if(rev == temp){
    printf("It is Palindrome");
  }else{
    printf("It is not a Palindrome");
  }
}