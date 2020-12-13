#include<stdio.h>
int main(){
  int m,n,p,q,s;
  printf("Enter size of matrix A\n");
  scanf("%d%d",&m,&n);
  int a[m][n];
  printf("Enter Matrix  A values\n");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter size of matrix B\n");
  scanf("%d%d",&p,&q);
  int b[p][q];
  printf("Enter Matrix  B values\n");
  for(int i=0;i<p;i++)
  {
    for(int j=0;j<q;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  int c[m][q];
  if(n==p){
    for(int i=0;i<m;i++)
    {
      for (int j=0;j<q; j++)
      {
        s = 0;
        for(int k=0;k<n;k++)
        {
          s = s + a[i][k]* b[k][j];
        } 
        c[i][j] = s;  
      }
    }
    printf("Matrix Multiplication is\n");
    for (int i = 0; i < m; i++)
    {
      for(int j = 0; j < q; j++)
      {
        printf("%d ",c[i][j]);
      }
      printf("\n");
    }
  }else{
    printf("Matrix Multiplication is not Posible...!\n");
  }

}
