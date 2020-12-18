#include<stdio.h>
void display1(); // declation of a function method.
void display2();
int main()
{
  printf("main function start\n");
  display1(); // calling display method
  printf("main function end\n");
}

void display1() // defintion of display method
{
  printf("display1 function start \n");
  display2();
  printf("display1 function end\n");
}
void display2() // defintion of display method
{
  printf("display2 function start \n");
  printf("display2 function end\n");
}