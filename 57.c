#include <stdio.h>
void x(int [],int [],int);
int main()
{
    int m=0;
    printf("Input the length of the array-\n");
    scanf("%d",&m);
    int a[m],b[m];
    printf("Input %d number of arrays continuously -\n",m);
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    x(a,b,m);
}
void x(int a[],int b[],int m)
{
    int x=0;
    for(int i=0;i<m;i++)
        if(a[i]<0)
    {
        b[x]=a[i];
        x++;
    }
    for(int i=0;i<m;i++)
    if(a[i]>0)
    {
        b[x]=a[i];
        x++;
    }

    for(int i=0;i<m;i++)
    if(a[i]==0)
    {
        b[x]=a[i];
        x++;
    }
    printf("Rearranged array -\n");
    for(int i=0;i<m;i++)
        printf("%d\t",b[i]);

}
