#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  fgets(s,100,stdin); // reading string
  int len = strlen(s) - 1;
  printf("Press \n1.To Lower Case\n2.To Upper Case\n3.Upper to Lower and Lower to Upper\n");
  int option;
  scanf("%d",&option);
  switch (option)
  {
    case 1:
      for(int i=0; i<len;i++){
        if(s[i]>=65 && s[i]<= 90)
          s[i] = s[i] + 32;
      }
      break;
    case 2:
      for(int i=0; i<len;i++){
        if(s[i]>=97 && s[i]<= 122)
          s[i] = s[i] - 32;
      }
      break;
    case 3:
      for(int i=0; i<len;i++){
        if(s[i]>=65 && s[i]<= 90)
          s[i] = s[i] + 32;
        else if(s[i]>=97 && s[i]<= 122)
          s[i] = s[i] - 32;
      }
      break;
  default:
    printf("Enter valid Input");
    break;
  }
  printf("%s\n",s);
}