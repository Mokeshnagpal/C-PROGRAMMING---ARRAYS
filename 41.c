#include <stdio.h>
#include <stdlib.h>
int n=0;
void change(int [],int);
int main()
{
    printf("Input the limit of array =\n");
    scanf("%d",&n);
    int x[n];
    printf("Input %d number of elements continuously\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    change(x,n);
    return 0;
}
void change(int a[],int l)
{
    printf("Changed array=\n");
    for(int i=0;i<l;i++)
    {
        if(a[i]%7==0)
            a[i]=a[i]/7;
        else
            a[i]=a[i]*3;
            printf("%d\t",a[i]);
    }
}
