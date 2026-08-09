#include<stdio.h>
#include<conio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("enter the row and column of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter row and column of Matrix B: ");
    scanf("%d%d",&p,&q);
    if(n!=p)
     printf("\n-------------Matrix can not be multiply(condtion not match )--------------");
    else
    {
      printf("\nfill matix A: \n");
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);
         }

      }
      printf("\nfill matix B: \n");
      for(i=0;i<p;i++)
      {
         for(j=0;j<q;j++)
         {
            scanf("%d",&a[i][j]);
         }

      }
      printf("\nmultiplication of Matrix A and B is: \n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=a[i][k]*b[k][i]+c[i][j];
            }
        }
      }
      printf("\n Matrix A is : \n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
      }
      printf("\n Matrix B is : \n");
      for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
      }
     printf("\n Multiplication Of matrix A and B  is : \n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
      }
    } 
    getch();
 
 
}