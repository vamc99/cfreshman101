#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int vc = 0,cc =0,wc=1;
  fgets(str,100,stdin);
  int len = strlen(str);
  printf("length of string: %d\n",len);
  for (int i = 0; i < len; i++)
  {
    if(str[i] == ' '){
      wc++;
    }
    else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      vc++;
    } 
    else
    {
      cc++;
    }
  }
  printf("count of vowels : %d\n",vc);
  printf("count of consonants : %d\n",cc);
  printf("no of words : %d\n",wc);
}