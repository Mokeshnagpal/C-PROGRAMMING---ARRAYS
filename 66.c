#include <stdio.h>
int main()
{
    int n=0,m=0,t=0;
    printf("Input number of rows -\n");
    scanf("%d",&m);
    printf("Input number of column -\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Input %d*%d numbers of element continuously -\n",n,m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Inputted array -\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Sorted array -\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            for(int k=0;k<(n-1-j);k++)
            {
                if(a[i][k]>a[i][k+1])
                {
                    t=a[i][k+1];
                    a[i][k+1]=a[i][k];
                    a[i][k]=t;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
