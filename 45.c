#include <stdio.h>
int main()
{
    int e=0,o=0,z=0,p=0,n=0;
    int a[20];
    printf("Input 20 number of arrays continuously -\n");
    for(int i=0;i<20;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
        e++;
    else
        o++;
    if(a[i]>0)
        p++;
    else if(a[i]==0)
        z++;
    else
        n++;
    }
    printf("Number of positive numbers in the array =%d\n",p);
    printf("Number of negative numbers in the array =%d\n",n);
    printf("Number of odd numbers in the array =%d\n",o);
    printf("Number of even numbers in the array =%d\n",e);
    printf("Number of zeros in the array =%d\n",z);
    return 0;
}

