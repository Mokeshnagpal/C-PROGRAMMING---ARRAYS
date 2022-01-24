#include <stdio.h>
int main()
{
    double avg=0.0;
    int i=0,j=0,s=0;
    printf("Input ith and jth number=\n");
    scanf("%d",&i);
    scanf("%d",&j);
    int a[i][j],b[j][i];
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<j;y++)
        {
            printf("Input value of a[%d][%d] =",x,y);
            scanf("%d",&a[x][y]);
            b[y][x]=a[x][y];
        }
    }
    printf("Matrix a is -\n");
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<j;y++)
            printf("%d\t",a[x][y]);
        printf("\n");
    }
    printf("Transpose of a is -\n");
    for(int x=0;x<j;x++)
    {
        for(int y=0;y<i;y++)
            printf("%d\t",b[x][y]);
        printf("\n");
    }
    return 0;
}
