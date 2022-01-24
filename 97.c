#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,c=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            printf("Index of the first peak element = %d",i);
            exit(0);
        }
    }
    printf("There is no peak element");
    return 0;
}
