#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t=0,m=0,n=0;
    printf("Input the length of both the array-\n");
    scanf("%d",&m);
    printf("Input the length of both the array-\n");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    printf("Input %d*%d number for the array continuously -\n",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[0][i];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i-1][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        b[m-1
        ][i]=c[i];
    }
    printf("New array -\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
