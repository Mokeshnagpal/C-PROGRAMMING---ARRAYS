#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l=0;
    printf("Input the length of the array-\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d number of arrays continuously -\n",l);
    for(int i=0;i<l;i++)
    scanf("%d",&a[i]);
    l=l-1;
    for(int i=0;i<=l;i++,l--)
    {
        if(a[i]!=a[l])
        {
            printf("Array is not palindromic!");
            exit (0);
        }
    }
    printf("Array is palindromic");
    return 0;
}
