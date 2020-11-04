/*
  find distance between two points
  sqrt((x1-2)^2 + (y1-y2)^2 )

  pow(a,2) => a power 2
  pow(a,5) => a power 5
*/
#include<stdio.h>
#include<math.h>
int main(){
  int x1,x2,y1,y2;
  double distance;
  printf("Enter Point1: ");
  scanf("%d%d",&x1,&y1);
  printf("Enter Point2: ");
  scanf("%d%d",&x2,&y2);
  distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
  printf("Distance between two points is: %lf",distance);
}