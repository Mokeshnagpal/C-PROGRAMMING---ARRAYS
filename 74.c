#include <stdio.h>
int main()
{
    int n=0,s=0,t=0;
    printf("Input number of rows/column -\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Input %d*%d numbers of element continuously -\n",n,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                s+=a[i][j];
            if((i+j)==(n-1))
                t+=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Sum of diagonal 1 - %d\n",s);
    printf("Sum of diagonal 2 - %d\n",t);
    return 0;
}
