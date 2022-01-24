#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0,l=0;
    printf("Input the length of the array-\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d number of arrays continuously -\n",l);
    for(int i=0;i<l;i++)
        scanf("%d",&a[i]);
    x=a[l-1];
    for(int i=l-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
    printf("\nNew array -\n");
    for(int i=0;i<l;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

