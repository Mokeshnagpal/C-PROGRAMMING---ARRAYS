#include <stdio.h>
int main()
{
    int a[10],c[5],b[5],t=0;
    printf("Input 10 numbers continuously -\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i<5)
            b[i]=a[i];
        else
            c[i-5]=a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<(4-i);j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<(4-i);j++)
        {
            if(c[j]<c[j+1])
            {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
    }
    printf("\nSorted array -\n");
    for(int i=0;i<5;i++)
        printf("%d\t",b[i]);
    for(int i=0;i<5;i++)
        printf("%d\t",c[i]);
        return 0;
}
