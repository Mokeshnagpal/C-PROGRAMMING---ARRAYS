#include <stdio.h>
int main()
{
    int s=0,d=0,c=0;
    int a[10];
    double av=0.0l;
    printf("Input 10 numbers=\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
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
    av=s/10;
    printf("Average =%0.2lf\n",av);
    printf("Maximum number = %d\n",c);
    printf("Minimum number = %d\n",d);
    return 0;
}
