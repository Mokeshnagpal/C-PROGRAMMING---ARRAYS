#include <stdio.h>
int main()
{
    int m=0,l=0,n=0;
    printf("Input the length of the first array-\n");
    scanf("%d",&m);
    int a[m];
    printf("Input %d number of arrays continuously -\n",m);
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Input the length of the second array-\n");
    scanf("%d",&n);
    int b[m+n];
    printf("Input %d number of arrays continuously -\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(int i=n;i<m+n;i++)
    {
        b[i]=a[l];
        l++;
    }
    l=m+n;
    m=0,n=0;
    for(int i=0;i<(l-1);i++)
    {
        for(int j=0;j<(l-1-i);j++)
        {
            if(b[j]<b[j+1])
            {
                m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
    }
    printf("The sorted array -\n");
    for(int i=0;i<l;i++)
        printf("%d\t",b[i]);
        return 0;
}
