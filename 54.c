#include <stdio.h>
void x(int [],int [],int []);
    int m=0,l=0,n=0;
int main()
{
    printf("Input the length of the first array-\n");
    scanf("%d",&m);
    int a[m];
    printf("Input %d number of arrays continuously -\n",m);
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Input the length of the second array-\n");
    scanf("%d",&n);
    int b[n];
    printf("Input %d number of arrays continuously -\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    l=m+n;
    int c[l];
    x(a,b,c);
    return 0;
}
void x(int a[],int b[],int c[])
{
    int n=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]%2==0)
        {
            c[n]=a[i];
            n++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]%2==0)
        {
            c[n]=b[i];
            n++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]%2!=0)
        {
            c[n]=a[i];
            n++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]%2!=0)
        {
            c[n]=b[i];
            n++;
        }
    }
    printf("Rearranged array -\n");
    for(int i=0;i<l;i++)
        printf("%d\t",c[i]);
}
