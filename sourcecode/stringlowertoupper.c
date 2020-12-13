#include<stdio.h>
int main()
{
  char s[]={"B"};
  s[0] = s[0] + 32;
  printf("%s\n",s);
}