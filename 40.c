#include <stdio.h>
#include <stdlib.h>
int n=0;
void Get2From1(int []);
int main()
{
    printf("Input the limit of array =\n");
    scanf("%d",&n);
    int x[n];
    printf("Input %d number of elements continuously\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    Get2From1(x);
    return 0;
}
void Get2From1(int a[])
    {
        int e=0,o=0,j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        int y[e],z[o];
        for(int i=0;i<n;i++)
        {
            if((a[i]%2)==0)
            {
                y[j]=a[i];
                j++;
            }
            else
            {
                z[k]=a[i];
                k++;
            }
        }
        printf("Even array -\n");
        for(int i=0;i<e;i++)
            printf("%d\t",y[i]);
        printf("\nOdd array -\n");
        for(int i=0;i<o;i++)
            printf("%d\t",z[i]);
    }
