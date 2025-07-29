// Matrix Addition and Answer Display

#include <stdio.h>
int main(){
int i,j,k,l,m,n,a[5][5],b[5][5],c[5][5];
printf("Enter the Order of matrix A");
scanf("%d %d",&m,&n);
printf("Enter the Order of matrix B");
scanf("%d %d",&k,&l);
if (m==k && n==l)
{
    printf("Enter Elements of Matrix A : ");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter Elements of Matrix B : ");
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    
    printf("The Difference of the given matrixes results in the matrix : \n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}  
    
else
{
    printf("Matrix Addition is not Possible!");
}
    return 0;
}
