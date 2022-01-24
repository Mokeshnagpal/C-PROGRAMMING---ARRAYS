#include <stdio.h>
int main()
{
    int n=0,c=0;
    printf("Input the length of array -\n");
    scanf("%d",&n);
    int a[n];
    printf("Input %d number of elements continuously -\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
            c=1;
    }
    if(c==1)
        printf("\nThe appearance of elements in the array are not consecutive.");
    else
        printf("\nThe appearance of elements in the array are consecutive.");
    return 0;
}
