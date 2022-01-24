#include <stdio.h>
int main()
{
    int a[10],se=0,po=1;
    printf("Input 10 numbers continuously =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            se+=a[i];
        else
            po*=a[i];
    }
    printf("SUM OF ALL EVEN NUMBERS IS - %d\n",se);
    printf("PRODUCT OF ALL ODD NUMBERS IS - %d",po);
    return 0;
}
