#include <stdio.h>
int n(int);
int main()
{
    int a[10];
    printf("Input 10 numbers continuously -\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Niven numbers are as follows =\n");
    for(int i=0;i<10;i++)
    {
        if(n(a[i])==1)
            printf("%d\t",a[i]);
    }
    return 0;
}
int n(int x)
{
    int y=0,s=0,z=0;
    z=x;
     if(z==0)
        return 1;

    while(x>0)
    {
        y=x%10;
        x=x/10;
        s+=y;
    }

    if(z%s==0)
        return 1;
    else
        return 0;
}
