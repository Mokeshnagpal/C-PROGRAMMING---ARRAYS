#include <stdio.h>
int main()
{
    int a[10][5],t=0;
    printf("Input 10*5 number in 2-d arrays continuously -\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int k=0;k<5;k++)
    {
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<(9-i);j++)
        {
            if(a[j][k]>a[j+1][k])
               {
                    t=a[j][k];
                    a[j][k]=a[j+1][k];
                    a[j+1][k]=t;
               }
        }
    }
    }
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
