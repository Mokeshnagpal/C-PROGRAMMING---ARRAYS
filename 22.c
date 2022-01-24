#include <stdio.h>
int s(int);
int main()
{
    int a[10];
    printf("Input 10 numbers continuously =\n");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Numbers with perfect squares are -\n");
    for(int i=0;i<10;i++)
    {
        if(s(a[i])==1)
            printf("%d\t",a[i]);
    }
    return 0;
}
int s(int x)
{
    for(int j=0;j<=x;j++)
    {
        if(j*j==x)
        return 1;
    }
    return 0;
}
