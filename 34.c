#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],m[3][3];
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Input value of a[%d][%d] =",x,y);
            scanf("%d",&a[x][y]);
        }
    }
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Input value of b[%d][%d] =",x,y);
            scanf("%d",&b[x][y]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                m[i][j]=a[i][k]*b[k][j]+m[i][j];
            }
        }
    }
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d\t",a[x][y]);
            printf("\n");
        }
    }
    return 0;
}

