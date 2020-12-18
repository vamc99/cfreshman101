#include<stdio.h>
double add(double,double);
double add3(double,double,double);
int main()
{
  printf("%lf\n", add(2,3));
  printf("%lf\n", add(2.5,3));
  printf("%lf\n", add(2,3.5));
  printf("%lf\n", add(2.6,3.7));
  printf("%lf\n", add(2.99999999,3.777777777));
  printf("%lf\n", add3(2,3,4));
  return 0;
}
double add(double a, double b){
  return (a + b);
}
double add3(double a, double b,double c){
  return (a + b + c);
}