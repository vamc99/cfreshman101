#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  fgets(str, 100, stdin);
  int len = strlen(str);
  // char rev[len];
  // for (int i = 0, j = len - 2; i < len; i++, j--)
  // {
  //   rev[i] = str[j];
  // }
  char t;
  for (int i = 0, j = len - 2; i < j; i++, j--)
  {
    t = str[i];
    str[i] = str[j];
    str[j] = t;
  }
  // printf("Revers of give string: %s\n",rev);
  printf("Revers of give string: %s\n",str);
}