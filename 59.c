#include <stdio.h>
int main()
{
    int x=0,m=0,n=0,t=0;
    printf("Input the length of the array-\n");
    scanf("%d",&m);
    printf("Input the breath of the array-\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Input %d*%d number of arrays continuously -\n",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==m-1||j==n-1)
            printf("%d\t",a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    return 0;
}
