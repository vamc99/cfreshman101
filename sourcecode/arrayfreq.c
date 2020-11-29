/*
a[] = {1,2,1,2,3,4,5,4,3,2,4,5,7,9,100}
out put
1 -> 2
2 -> 3
3 -> 2
4 -> 3
5 -> 2
7 -> 1
9 -> 1
100 -> 1
*/

#include<stdio.h>
#include<limits.h>
int main()
{
  int n, max=INT_MIN;
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    if(max<a[i])
      max = a[i];
  }
  int freq[max+1];
  for(int i=0;i<max+1;i++){
    freq[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    freq[a[i]]++;
  }
  for (int i = 0; i < max+1; i++)
  {
    if(freq[i]!=0)
      printf("%d -> %d\n",i,freq[i]);
  }
  return 0;
}
