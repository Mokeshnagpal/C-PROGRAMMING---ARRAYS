#include <stdio.h>
int main()
{
    int a[20],t=0,x=0;
    printf("Input 20 numbers continuously=\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input the number to be searched =\n");
    scanf("%d",&t);
    for(int i=0;i<20;i++)
    {
        if(a[i]==t)
        {
            if(x==1)
            printf("%d is also found in %d position\n",t,i+1);
            else
            printf("%d is found in %d position\n",t,i+1);
            x=1;
        }
    }
    if(x!=1)
        printf("Value not found");
    return 0;
}
