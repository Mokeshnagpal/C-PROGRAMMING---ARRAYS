#include <stdio.h>
#include <stdlib.h>
void convert(int [],int);
int main()
{
    int m=0;
    printf("Input nth value -\n");
    scanf("%d",&m);
    int a[m];
    printf("Input nth values continuously -\n");
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
        convert(a,m);
        printf("New array -\n");
        for(int i=0;i<m;i++)
            printf("%d\t",a[i]);
        return 0;
}
void convert(int a[],int m)
{
    int t=0;
        t=a[0];
        for(int i=1;i<m;i++)
        {
            a[i-1]=a[i];
        }
        a[m-1]=t;
}
