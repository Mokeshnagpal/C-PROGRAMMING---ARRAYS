#include <stdio.h>
int main()
{
    int l=0,n=0,m=0;
    printf("Input length of the array -\n");
    scanf("%d",&l);
    n=l;
    int a[l],b[l];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<l;i++)
    {
        if(a[i-1]==a[i])
        {
            a[i-1]=a[i-1]*2;
            a[i]=0;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]==0)
        {
            b[n-1]=a[i];
            n--;
        }
        else
        {
            b[m]=a[i];
            m++;
        }
    }
    printf("New array -\n");
    for(int i=0;i<l;i++)
        printf("%d\t",b[i]);
    return 0;
}
