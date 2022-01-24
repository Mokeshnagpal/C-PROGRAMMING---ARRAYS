#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,i=0,y=0,z=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=(n-1);i>=0;i--)
    {

        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                y=j-i+1;
        }
        if(z<y)
            z=y;
    }
    printf("\nLargest spanning value - %d",z);
    return 0;
}
