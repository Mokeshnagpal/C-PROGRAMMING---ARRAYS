#include <stdio.h>
void aa(int [],int);
int main()
{
    int l=0;
    printf("Input the length of the array-\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d number of arrays continuously -\n",l);
    for(int i=0;i<l;i++)
    scanf("%d",&a[i]);
    aa(a,l);
    return 0;
}
void aa(int x[],int n)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(i!=(n-1))
        {
            t=x[i];
            x[i]=x[i+1];
            x[i+1]=t;
            i++;
        }
    }
    printf("\nNew array -\n");
    for(int i=0;i<n;i++)
    printf("%d\t",x[i]);
}
