#include <stdio.h>
int main()
{
    int a[5][5],t=0;
    printf("Input 10*5 number in 2-d arrays continuously -\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Semi diagonal -\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j&&i<=2)
                printf("%d\t",a[i][j]);
                else
                    printf("\t");
        }
        printf("\n");
    }
    return 0;
}
