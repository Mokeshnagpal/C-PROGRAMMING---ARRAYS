#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,c=0;
    printf("Input the length of array -\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Input %d number of elements continuously from range (0-%d) -\n",n,n-1);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]>=n)
    {
        printf("Wrong input !!!");
        exit(0);
    }
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[a[i]];
    }
    for(int i=0;i<n;i++)
        a[i]=b[i];
    printf("\nNew array -\n");
    for(int i=0;i<n;i++)
            printf("%d\t",a[i]);
            return 0;
}
