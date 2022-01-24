#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50],t=0,min=0;
    printf("Input 50 number for the array continuously -\n");
    for(int i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<49;i++)
    {
        min=i;
        for(int j=i+1;j<50;j++)
        {
            if(a[j]>a[min])
            {
                min=j;
            }
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
        printf("Sorted array -\n");
    for(int i=0;i<50;i++)
    printf("%d\t",a[i]);
    printf("\nLowest marks -%d",a[49]);
    printf("\nHighest marks -%d",a[0]);
    return 0;
}
