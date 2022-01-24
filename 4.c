#include <stdio.h>
int main()
{
    int z=0,x=0,a[20];
    printf("Input 20 numbers continuously =\n");
    for(int i=0;i<20;i++)
        scanf("%d",&a[i]);
    printf("Input the number to be searched\n");
    scanf("%d",&z);
    for(int i=0;i<=20;i++)
    {
        if(a[i]==z)
            x=1;
    }
        if(x==1)
            printf("Search successful");
        else
            printf("Search unsuccessful");
        return 0;
}
