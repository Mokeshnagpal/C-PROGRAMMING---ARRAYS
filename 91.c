#include <stdio.h>
int main()
{
    int n=0,x=0,y=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0]*a[1];
    y=a[n-1]*a[n-2];
    for(int i=1;i<n-1;i++)
    {
        b[i]=a[i-1]*a[i+1];
    }
    b[0]=x;
    b[n-1]=y;
    printf("New array -\n");
    for(int i=0;i<n;i++)
        printf("%d\t",b[i]);
    return 0;
}
