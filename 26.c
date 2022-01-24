#include <stdio.h>
int main()
{
    int z=0,y=0,s=0,a[50];
    printf("Input 50 numbers continuously =\n");
    for(int i=0;i<50;i++)
        scanf("%d",&a[i]);
        printf("Magic numbers are as follows -\n");
    for(int i=0;i<50;i++)
    {
        y=a[i];
        while(y>9)
        {
            while(y>0)
            {
                z=y%10;
                y=y/10;
                s+=z;
                if(s==1)
            printf("%d\t",a[i]);
            }
            y=s,s=0;
        }
    }
    return 0;
}
