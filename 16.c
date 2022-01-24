#include <stdio.h>
int main()
{
    int d=0,c=0;
    int a[10];
    printf("Input 10 numbers=\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    d=a[0];
    for(int i=0;i<10;i++)
    {
        if(c<a[i])
            c=a[i];
        if(d>a[i])
            d=a[i];
    }
    printf("Maximum number = %d\n",c);
    printf("Minimum number = %d\n",d);
    return 0;
}
