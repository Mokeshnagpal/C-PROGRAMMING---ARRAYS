#include <stdio.h>
int main()
{
    int s=0;
    int a[]={68,35,19,55,91,29};
    int l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l;i++)
        if(s<a[i])
        s=a[i];
    printf("Greatest number = %d\n",s);
    return 0;
}
