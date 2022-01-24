#include <stdio.h>
int main()
{
    int n=0,w=0,x=0,y=0,z=0;
    printf("Input the length of array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input %d number of elements continuously -\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            w=a[i];
            x=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<a[i-1])
        {
            z=a[i];
            y=i;
            break;
        }
    }
    for(int i=0;i<x;i++)
    {
        if(w<a[i])
        {
            w=a[i];
            x=i;
        }
    }

    for(int i=y+1;i<n;i++)
    {
        if(z<a[i])
        {
            z=a[i];
            y=i;
            break;
        }
    }
    printf("\nSub-array lies between %d and %d",x,y);
    return 0;
}
