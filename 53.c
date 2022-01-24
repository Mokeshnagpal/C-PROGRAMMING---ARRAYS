#include <stdio.h>
int main()
{
    int c=0,d=0,s=0,x=0;
    long long int a[5],b;
    printf("Input 5 isbn numbers continuously -\n");
    for(int i=0;i<5;i++)
    scanf("%lld",&a[i]);
    printf("ISBN numbers are as follows -\n");
    for(int i=0;i<5;i++)
    {
        b=a[i];
        while(b>0)
        {
            b=b/10;
            c++;
        }
        if(c!=10)
            continue;
        b=a[i];
        s=0,x=10;
        while(b>0)
        {
            d=b%10;
            b=b/10;
            s=s+d*x;
            x--;
        }
        if(s%11==0)
            printf("%lld",a[i]);
    }
    return 0;
}
