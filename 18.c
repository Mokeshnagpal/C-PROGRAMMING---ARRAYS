#include <stdio.h>
int main()
{
    int x=0,l=0;
    printf("Input length =\n");
    scanf("%d",&l);
    int a[l],b[l];
    x=l-1;
    printf("Input %d numbers=\n",l);
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
        b[x]=a[i];
        x--;
    }
    printf("\n");
    for(int i=0;i<l;i++)
        printf("%d\t",b[i]);
    return 0;
}
