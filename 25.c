#include <stdio.h>
int main()
{
    int l=0,x=0,y=0,s=0,a[40];
    printf("Input 40 numbers continuously =\n");
    for(int i=0;i<40;i++)
        scanf("%d",&a[i]);
        printf("Armstrong number are as follows -\n");
    for(int i=0;i<40;i++)
    {
        s=0;
        x=a[i];
        while(x>0)
        {
            y=x%10;
            x=x/10;
            s+=(y*y*y);
        }
        if(a[i]==s)
            printf("%d\t",a[i]);
    }
    return 0;
}
