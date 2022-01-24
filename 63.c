#include <stdio.h>
#include <stdlib.h>
void sort(int []);
void search(int []);
int main()
{
    int a[20],b[20];
    printf("Input 20 number for the array continuously -\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    printf("Sorted array -\n");
    for(int i=0;i<20;i++)
    {
        printf("%d\t",a[i]);
    }
    search(a);
    return 0;
}
void sort(int a[])
{
    int t=0;
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<(19-i);j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void search(int a[])
{
    int t=0;
    printf("\nInput the number to be found -\n");
    scanf("%d",&t);
    for(int i=0;i<20;i++)
    {
        if(t==a[i])
        {
            printf("Number found");
            exit(0);
        }
    }
    printf("Number not found");
}
