#include <stdio.h>
int main()
{
    int n=0,j=0,k=0;
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
        if(a[i]<0)
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    int x[j],y[k];
    j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            x[j]=a[i];
            j++;
        }
        else
        {
            y[k]=a[i];
            k++;
        }
    }
    if(j>k)
    {
        for(int i=0;i<k;i++)
        {
            printf("%d\t",x[i]);
            printf("%d\t",y[i]);
        }
        for(int i=k;i<j;i++)
            printf("%d\t",x[i]);
    }
    {
        for(int i=0;i<j;i++)
        {
            printf("%d\t",x[i]);
            printf("%d\t",y[i]);
        }
        for(int i=j;i<k;i++)
            printf("%d\t",y[i]);
    }
    return 0;
}
