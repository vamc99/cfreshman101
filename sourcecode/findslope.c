/*
  find slop of two points
  (x1,y1) (x2,y2)
  m = (y2 - y1) / (x2 - x1)
*/
#include<stdio.h>
int main(){
  int x1,x2,y1,y2,m;
  printf("Enter x1:");
  scanf("%d",&x1);
  printf("Enter y1:");
  scanf("%d",&y1);
  printf("Enter x2:");
  scanf("%d",&x2);
  printf("Enter y2:");
  scanf("%d",&y2);
  m = (y2-y1)/(x2-x1);
  printf("%d",m);
}