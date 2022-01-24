#include <stdio.h>
#include <stdlib.h>
void oddEven(int [],int);
int main()
{
    int n=0;
    printf("Input nth value -\n");
    scanf("%d",&n);
    int p[n];
    printf("Input nth values continuously -\n");
    for(int i=0;i<n;i++)
        scanf("%d",&p[i]);
    oddEven(p,n);
}
void oddEven(int a[],int x)
{
    printf("New Array -\n");
    for(int i=0;i<x;i++)
    {
        if(a[i]%2==0)
            a[i]+=10;
        else
            a[i]+=5;
        printf("%d\t",a[i]);
    }
}
