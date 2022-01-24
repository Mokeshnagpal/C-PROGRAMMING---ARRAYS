#include <stdio.h>
int main()
{
    int a[3][4],x[3],s=0;
    printf("Input 3*4 number in 2-d arrays continuously -\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            s+=a[j][i];
        }
        x[i]=s;
        s=0;
    }
    printf("\n\n");
    for(int i=0;i<4;i++)
    {
        printf("Sum of row %d - %d\n",i+1,x[i]);
    }
    return 0;
}
