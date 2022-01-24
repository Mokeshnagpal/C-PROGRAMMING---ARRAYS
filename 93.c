#include <stdio.h>
int main()
{
    int c=0,n=0,t=0,x=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>x)
            x=a[i];
    }
    printf("Sorted array -\n");
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                c=1;
                printf("%d\t",i);
                j=n;
            }
        }
        if(c!=1)
            printf("-1\t");
        c=0;
    }
    return 0;
}
