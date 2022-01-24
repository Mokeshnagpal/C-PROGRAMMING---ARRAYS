#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,m=0,k=0,x=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the value of k -\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        m=a[i];
        if(n-i<k)
            break;
        for(int j=i;j<n;j++)
        {
            x++;
            if(m<a[j])
                m=a[j];
            printf("%d\t",a[j]);
            if(x>=k)
            {
                x=0;
                break;
            }
        }
        printf("---->%d\n",m);
    }
    return 0;
}
