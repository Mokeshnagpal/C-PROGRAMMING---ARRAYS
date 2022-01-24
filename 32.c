#include <stdio.h>
#include <stdlib.h>
int happy(int);
int main()
{
    int a[20];
    printf("Input 20 numbers simuntaneously -\n");
    for(int i=0;i<20;i++)
        scanf("%d",&a[i]);
        printf("Happy number are as follows -\n");
    for(int i=0;i<20;i++)
    {
        if(happy(a[i])==1)
            printf("%d\t",a[i]);
    }
    return 0;
}
int happy(int x)
{
    int s=0,y=0;
    if(x==1||x==7)
        {
            return 1;
            exit (0);
        }
    while(x>9)
    {
        while(x>0)
        {
            y=x%10;
            s=s+y*y;
            x=x/10;
        }
        x=s;
        s=0;
        if(x==1)
        {
            return 1;
            exit(0);
        }
    }
    return 0;
}
