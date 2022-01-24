#include <stdio.h>
int fact(int);
int main()
{
    int l=0,x=0,y=0,s=0;
    printf("Input the length of the array\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d numbers continuously =\n",l);
    for(int i=0;i<l;i++)
        scanf("%d",&a[i]);
        printf("Special number are as follows -\n");
    for(int i=0;i<l;i++)
    {
        s=0;
        x=a[i];
        while(x>0)
        {
            y=x%10;
            x=x/10;
            s+=fact(y);
        }
        if(a[i]==s)
            printf("%d\t",a[i]);
    }
    return 0;
}
int fact(int p)
{
    int q=1;
    for(int i=1;i<=p;i++)
    {
        q*=i;
    }
    return q;
}
