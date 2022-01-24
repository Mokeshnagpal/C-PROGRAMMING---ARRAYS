#include <stdio.h>
int main()
{
    int a[15],c=0,d=0;
    printf("Input 15 numbers continuously -\n");
    for(int i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0&&a[i]%2==0)
            c++;
        else if(a[i]<0&&a[i]%2!=0)
            d++;
    }
    int e[c],o[d];
    c=0,d=0;
    for(int i=0;i<15;i++)
    {
        if(a[i]>=0&&a[i]%2==0)
        {
            e[c]=a[i];
            c++;
        }
        else if(a[i]<0&&a[i]%2!=0)
        {
            o[d]=a[i];
            d++;
        }
    }
    printf("All the positive even numbers are as follows -\n");
    for(int i=0;i<c;i++)
        printf("%d\t",e[i]);
    printf("\nAll the negative odd numbers are as follows -\n");
    for(int i=0;i<d;i++)
        printf("%d\t",o[i]);
        return 0;
}

