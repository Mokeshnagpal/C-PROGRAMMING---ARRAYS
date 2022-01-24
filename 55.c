#include <stdio.h>
int check(int []);
int main()
{
    int a[10];
    printf("Input 10 numbers continuously -\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    int x=check(a);
    if(x==1)
        printf("Array is arranged in ascending order\n");
    else if(x==-1)
        printf("Array is arranged in descending order\n");
    else
        printf("Array is not arranged\n");
}
int check(int a[])
{
    int b=a[0],c=0;
    for(int i=1;i<10;i++)
    {
        if(b<=a[i])
            b=a[i];
        else
            c=1;
    }
    if(c==0)
        return 1;
        c=0;
    for(int i=1;i<10;i++)
    {
        if(b>=a[i])
            b=a[i];
        else
            c=1;
    }
    if(c==0)
        return -1;
    else
        return 0;
}
