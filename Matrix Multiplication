// Matrix Multiplication

#include <stdio.h>

int main() {
    int i,j,k,l,m,n,a[5][5],b[5][5],c[5][5],d;
    printf("Enter order of matrix A :");
    scanf("%d%d",&m,&n);
    printf("Enter order of Matrix B : ");
    scanf("%d%d",&k,&l);
    if(n==k)
    {
    printf("Enter Elements of Matrix A :");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter Elements of Matrix B :");
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=1;i<=m;i++)
    {
        for (j=1;j<=l;j++)
        {
           c[i][j] == 0;
           for(d=1;d<=n;d++)
           {
               c[i][j] = c[i][j] + a[i][d] * b[d][j];
           }
        }
    }
    for (i=1;i<=m;i++)
    {
        for(j=1;j<=l;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
    
    else
    {
        printf("Matrix Multiplication is not Possible!");
    }
    return 0;
}
