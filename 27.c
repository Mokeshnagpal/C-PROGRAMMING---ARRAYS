#include <stdio.h>
int main()
{
    int s=0,x=0,y=0,z=0,a[20];
    printf("Input 20 numbers continuously =\n");
    for(int i=0;i<20;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<20;i++)
    {
        x=a[i];
        while(x>0)
        {
            y=x%10;
            x=x/10;
            if(x==0||z==0)
                s+=y;
            z++;
        }
        printf("Sum of first and last digit of %d is %d\n",a[i],s);
        s=0,z=0;
    }
    return 0;
}
