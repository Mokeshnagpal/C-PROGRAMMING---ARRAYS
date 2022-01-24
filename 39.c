#include <stdio.h>
#include <stdlib.h>
int a=0;
void Get1From2(int [],int []);
int main()
{
    int b=0;
    printf("Input the limit of array 1=\n");
    scanf("%d",&a);
    printf("Input the limit of array 2=\n");
    scanf("%d",&b);
    if(a!=b)
    {
        printf("Both limits should be same\n");
        exit (0);
    }
    int x[a],y[b];
    printf("Input %d numbers continuously -\n",a);
    for(int i=0;i<a;i++)
        scanf("%d",&x[i]);
    printf("Input %d numbers continuously -\n",b);
    for(int i=0;i<b;i++)
        scanf("%d",&y[i]);
    Get1From2(x,y);
}
void Get1From2(int p[],int q[])
{
    int r[(2*a)],j=0;
    for(int i=0;i<a;i++)
    {
        r[j]=p[i];
            j+=2;
    }
    j=1;
    for(int i=0;i<a;i++)
    {
        r[j]=q[i];
            j+=2;
    }
    printf("New array -\n");
    for(int i=0;i<(2*a);i++)
    {
        printf("%d\t",r[i]);
    }
}
