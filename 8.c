#include <stdio.h>
int main()
{
    int c=0;
    int a[10];
    printf("Input 10 numbers=\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Prime numbers are =\n");
    for(int i=0;i<10;i++)
    {
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%2==0)
                c=1;
        }
        if(c==0)
            printf("%d\t",a[i]);
            c=0;
    }
    return 0;
}
