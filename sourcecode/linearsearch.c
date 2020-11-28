/*
  n and n elements and key
  n = 6 
  a = {3, 6, 8, 5, 19, 45 }
  key = 5
  output: key found at 3
  key = 20 
  output: key is not found
*/
#include<stdio.h>
int main()
{
  int n,key,i,flag=0;
  scanf("%d",&n);
  int a[n];
  // read array
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&key);
  // linear search
  for(i=0;i<n; i++)
  {
    if(a[i] == key)
    {
      flag = 1;
      break;
    }
  }
  if(flag==1){
    printf("Key found at index %d",i);
  }else{
    printf("Key is not found");
  }

  return 0;
}

