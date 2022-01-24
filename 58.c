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
    if(m%2==0)
    {
        x=(m/2)-1;
        for(int i=0;i<n;i++)
        {
            t=a[x][i];
            a[x][i]=a[x+1][i];
            a[x+1][i]=t;;
        }
    }
    printf("The new matrix -\n");
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
