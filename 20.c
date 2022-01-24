#include <stdio.h>
int main()
{
    int a[10],c=0;
    printf("Input 10 numbers continuously =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            c++;
    }
    int e[c],o[10-c],x=0,y=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            e[x]=a[i];
            x++;
        }
        else
        {
            o[y]=a[i];
            y++;
        }
    }
    printf("EVEN NUMBERS ARE AS FOLLOWS -\n");
    for(int i=0;i<x;i++)
    printf("%d\t",e[i]);
    printf("\nODD NUMBERS ARE AS FOLLOWS -\n");
    for(int i=0;i<y;i++)
    printf("%d\t",o[i]);
    return 0;
}
