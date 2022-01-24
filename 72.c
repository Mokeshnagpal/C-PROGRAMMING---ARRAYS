#include <stdio.h>
int main()
{
    int a[5],b[5],c[5],x=0;
    printf("Input 5 numbers continuously -\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input another 5 numbers continuously -\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]==b[j])
        {
            c[x]=a[i];
            x++;
            j=5;
        }
        }

    }
    printf("Array -\n");
    for(int i=0;i<x;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
