#include <stdio.h>
int main()
{
    int m=0,l=0,n=0;
    printf("Input the length of the array-\n");
    scanf("%d",&m);
    int a[m],b[m],c[m];
    printf("Input %d number of arrays continuously -\n",m);
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Input %d number of arrays continuously -\n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        c[i]=2*a[i]+3*b[i];
    }
    printf("The resultant array -\n");
    for(int i=0;i<m;i++)
        printf("%d\t",c[i]);
        return 0;
}
