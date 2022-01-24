#include <stdio.h>
#include <stdlib.h>
void SWAP2CHANGE(int [],int);
int main()
{
    int m=0;
    printf("Input nth value -\n");
    scanf("%d",&m);
    int a[m];
    printf("Input nth values continuously -\n");
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    SWAP2CHANGE(a,m);
    for(int i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void SWAP2CHANGE(int p[],int N)
{
    int t=0;
    for(int i=0;i<N;i++)
    {
        if(p[i]%10==0&&i!=(N-1))
        {
            t=p[i+1];
            p[i+1]=p[i];
            p[i]=t;
            i++;
        }
    }
}
