#include <stdio.h>
int main()
{
    int a[5],b[5],c[10],j=0;
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
        c[j]=a[i];
        j+=2;
    }
    j=1;
    for(int i=0;i<5;i++)
    {
        c[j]=b[i];
        j+=2;
    }
    printf("New array -\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
