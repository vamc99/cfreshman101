#include <stdio.h>
#include <string.h>
int main()
{
  char s1[100] = "this is a good progress";
  char s2[100] = "is";
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int count = 0;
  int flag;
  for (int i = 0; i <= len1 - len2; i++)
  {
    flag = 1;
    for (int j = 0; j < len2; j++)
    {
      if (s1[i + j] != s2[j])
      {
        flag = 0;
        break;
      }
    }
    if (flag)
    {
      count++;
    }
  }
  printf("%d", count);
}