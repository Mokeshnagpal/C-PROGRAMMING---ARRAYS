#include <stdio.h>
int main()
{
    int a[4][4],b[4][4];
    for(int x=0;x<4;x++)
    {
        for(int y=0;y<4;y++)
        {
            printf("Input value of a[%d][%d] =",x,y);
            scanf("%d",&a[x][y]);
        }
    }
    for(int x=0;x<4;x++)
    {
        for(int y=0;y<4;y++)
        {
            printf("Input value of b[%d][%d] =",x,y);
            scanf("%d",&b[x][y]);
            b[x][y]=b[x][y]+a[x][y];
        }
    }
    printf("Sum of 2-D arrays -\n");
    for(int x=0;x<4;x++)
    {
        for(int y=0;y<4;y++)
        {
            printf( "%d\t",b[x][y]);
        }
        printf("\n");
    }
    return 0;
}
