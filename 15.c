#include <stdio.h>
int main()
{
    int a[20];
    printf("Input 20 numbers continuously =\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=0,p=0;
    for(int i=0;i<19;i++)
    {
        min=a[i];
        for(int j=i+1;j<20;j++)
        {
            if(a[j]>=min)
            {
                min=j;
            }
        }
        p=a[i];
        a[i]=a[min];
        a[min]=p;
    }
    printf("Digits in descending order -\n");
    for(int i=0;i<20;i++)
    printf("%d\n",a[i]);
    return 0;
}
