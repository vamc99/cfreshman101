/*
  Handshake Problem
  P = 2
  P1 -> P2

  P = 3
  P1 -> P2,P3
  P2 -> P3

  P = 4
  P1 -> P2,P3,P4
  P2 -> P3,P4
  P3 -> P4

P 2 3 4 5  
# 1 3 6 10 

formula n*(n-1)/2
*/

#include<stdio.h>
int main(){
  int n,noOfHandShakes;
  printf("Enter Number of Persons:");
  scanf("%d",&n);
  noOfHandShakes = n*(n-1)/2;
  printf("%d",noOfHandShakes);
}









