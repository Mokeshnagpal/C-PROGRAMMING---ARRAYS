#include <stdio.h>
int main()
{
    int l=0,t=0;
    printf("Input length of the array -\n");
    scanf("%d",&l);
    int a[l];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<l;i++)
    {
        if(i%2==0)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        else
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("New array -\n");
    for(int i=0;i<l;i++)
        printf("%d\t",a[i]);
    return 0;
}


