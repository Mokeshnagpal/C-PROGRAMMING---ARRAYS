#include <stdio.h>
int main()
{
    int a[10],x=0;
    printf("Input 10 numbers continuously -\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the position from where you want to delete the number -\n");
    scanf("%d",&x);
    printf("New array \n");
    for(int i=0;i<10;i++)
    {
        if(i==x-1)
            continue;
        printf("%d\t",a[i]);
    }
    return 0;
}
