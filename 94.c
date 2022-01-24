#include <stdio.h>
int main()
{
    int c=0,n=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i-1]!=a[i])
        {
            if(a[i]==a[i+1])
                c++;
        }
    }
    printf("\nNumber of clusters - %d",c);
    return 0;
}
