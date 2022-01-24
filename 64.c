#include <stdio.h>
int main()
{
    int n=0,m=0,s1=0,s2=0;
    printf("Input number of rows -\n");
    scanf("%d",&n);
    printf("Input number of column -\n");
    scanf("%d",&m);
    int a[n][m];
    printf("Input %d*%d numbers of element continuously -\n",n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        s1=s1+a[0][i];
        s2=s2+a[n-1][i];
    }
    printf("Sum of 1st row element - %d\n",s1);
    printf("Sum of %dth row element - %d\n",n,s2);
    return 0;
}
