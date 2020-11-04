#include<stdio.h>
int main(){
  char ch;
  int a;
  short int b;
  long int c;
  unsigned int d;
  printf("%lu\n",sizeof(char));
  printf("%lu\n",sizeof(int));
  printf("%lu\n",sizeof(short int));
  printf("%lu\n",sizeof(long int));
  printf("%lu\n",sizeof(unsigned int));
}