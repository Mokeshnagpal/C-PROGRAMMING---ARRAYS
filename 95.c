#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n=0,s1=0,s2=0,i=0;
    printf("Input length of the array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input the %d numbers continuously -\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n=n-1;
    while(i<=n)
    {
            if(s1<=s2)
            {
                s1+=a[i];
                i++;
            }
            else
            {
                s2+=a[n];
                n--;
            }
            if(s1==s2)
            {
                printf("The array can be split in a position where the sum of both side are equal.");
                exit(0);
            }
    }
    printf("The array cannot be split in a position where the sum of both side are equal.");
    return 0;
}
