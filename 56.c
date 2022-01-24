#include <stdio.h>
void x(int [],int []);
int main()
{
    int a[6],b[6];
    printf("Input 6 number of arrays continuously -\n");
    for(int i=0;i<6;i++)
    scanf("%d",&a[i]);
    printf("Input 6 number of arrays continuously -\n");
    for(int i=0;i<6;i++)
    scanf("%d",&b[i]);
    x(a,b);
    return 0;
}
void x(int a[],int b[])
{
    int t=0;
    for(int i=0;i<6;i++)
    {
        if(i%2!=0)
        {
            t=a[i];
            a[i]=b[i];
            b[i]=t;
        }
    }
    printf("Rearranged arrays -\n");
    for(int i=0;i<6;i++)
        printf("%d\t",a[i]);
        printf("\n");
    for(int i=0;i<6;i++)
        printf("%d\t",b[i]);
}
