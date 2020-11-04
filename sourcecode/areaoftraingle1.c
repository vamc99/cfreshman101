/*
  find area of a triangle when you have sides.
  sides are a,b and c.
  s = (a+b+c)/2
  area = sqrt(s*(s-a)*(s-b)*(s-c))
*/
#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c,s;
  double area;
  printf("Enter 3 sides a,b and c: ");
  scanf("%f%f%f",&a,&b,&c);
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area of Triangle is : %.4lf\n",area);
}