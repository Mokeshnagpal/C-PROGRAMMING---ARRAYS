#include <stdio.h>
int fact(int);
int main()
{
    int a[10];
    printf("Array of factorial number -\n");
    for(int i=0;i<10;i++)
    {
        a[i]=fact(i+1);
        printf("%d\t",a[i]);
    }
}
int fact(int x)
{
    int y=1;
    for(int i=1;i<=x;i++)
        y*=i;
    return y;
}
