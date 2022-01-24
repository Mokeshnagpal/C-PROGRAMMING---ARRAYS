#include <stdio.h>
int main()
{
    int n=0,x=0,t=0,q=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    q=n/2;
    for(int i=0;i<n;)
    {
        printf("%d\t",a[i]);
        if(n%2!=0&&i==q)
            break;
        printf("%d\t",a[n-1]);
        i++;
        n--;
    }
    return 0;
}
