#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20];
    int b[5],c[5];
    printf("Input 10 number of arrays continuously -\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i<5)
            b[i]=a[i];
        else
            c[i-5]=a[i];
    }
    printf("First array -\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\nSecond array -\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}

