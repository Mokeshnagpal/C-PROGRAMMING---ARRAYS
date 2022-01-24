#include <stdio.h>
int main()
{
    int a[10],b[5],j=0;
    printf("Input 10 numbers continuously -\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        b[i]=a[j]+a[j+1];
        j+=2;
    }
    printf("New Array -\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
