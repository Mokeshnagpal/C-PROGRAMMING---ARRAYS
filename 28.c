#include <stdio.h>
int main()
{
    int s=0,x=0,y=0,p=1,z=0,a[5];
    printf("Input 5 numbers continuously =\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
        printf("Flappy numbers are as follows =\n");
    for(int i=0;i<5;i++)
    {
        x=a[i];
        while(x>0)
        {
            y=x%10;
            x=x/10;
            s+=y;
            if(z==0||z==1)
                p*=y;
            z++;
        }
        if(s==36&&p==32)
        printf("%d\t",a[i]);
        s=0,z=0;
    }
    return 0;
}
