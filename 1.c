#include <stdio.h>
int main()
{
    int s=0;
    int a[]={25,38,49,50,70,59};
    int l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l;i++)
        s+=a[i];
    printf("Sum = %d\n",s);
    printf("Average = %d",(s/l));
    return 0;
}
