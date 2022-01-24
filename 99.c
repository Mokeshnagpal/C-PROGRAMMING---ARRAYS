#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,c=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously either 0 or 1 -\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>1)
        {
            printf("Wrong input !!!");
            exit(0);
        }
    }
    printf("The new array -\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            printf("%d\t",a[i]);
    }
    return 0;
}
