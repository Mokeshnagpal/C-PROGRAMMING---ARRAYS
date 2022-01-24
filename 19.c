#include <stdio.h>
int palin(int);
int main()
{
    int a[20];
    printf("Input 20 numbers=\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nPalindrone numbers are as follows -\n");
    for(int i=0;i<20;i++)
    {
        if(palin(a[i])==1)
            printf("%d\t",a[i]);
    }
    return 0;
}
int palin(int x)
{
    int y=0,s=0,z=x;
    while(x>0)
    {
        y=x%10;
        x=x/10;
        s=s*10+y;
    }
    if(z==s)
        return 1;
    else
        return 0;
}
