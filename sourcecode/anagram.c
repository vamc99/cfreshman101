#include <stdio.h>
#include <string.h>
int main()
{
  char s1[100], s2[100];
  fgets(s1, 100, stdin); // reading string
  fgets(s2, 100, stdin);
  int len1 = strlen(s1) - 1;
  int len2 = strlen(s2) - 1;
  int freq1[26], freq2[26];
  int flag = 1;
  if (len1 == len2)
  {
    // initiliase to zero
    for (int i = 0; i < 26; i++)
    {
      freq1[i] = 0;
      freq2[i] = 0;
    }
    for (int i = 0; i < len1; i++)
    {
      freq1[s1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++)
    {
      freq2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
      if (freq1[i] != freq2[i])
        flag = 0;
        break;
    }
    if(flag){
      printf("the given strings are anagarams\n");
    }else{
      printf("the given strings are not anagarams\n");
    }
  }
  else
  {
    printf("the given strings are not anagarams\n");
  }
}