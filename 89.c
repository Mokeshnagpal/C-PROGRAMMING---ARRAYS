#include <stdio.h>
int main()
{
    int y=0,l=0,x=0,k=0,c=0;
    printf("Input length of the array -\n");
    scanf("%d",&l);
    int a[l];
    printf("Input the value of k -\n");
    scanf("%d",&k);
    printf("Input the %d numbers continuously -\n",l);
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=k)
            c++;
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]>=k)
        {
            x=i;
            break;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(i>x)
        {
            if(a[i]<=k)
                y++;
        }
    }
    printf("\nNumber of minimum swaps - %d\n",y);
        return 0;
}

