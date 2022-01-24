#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,x=0,y=0,s=0;
    printf("Input number of boxes\n");
    scanf("%d",&a);
    if(a>1000)
    {
        printf("Invalid input !!!");
        exit(0);
    }
    x=a%48;
    y=a/48;
    if(y>0)
        printf("%d cartens(containing 48 boxes)\n",y);
    s=s+y;
    y=x/24;
    x=x%24;
    if(y>0)
        printf("%d cartens(containing 24 boxes)\n",y);
    s=s+y;
    y=x/12;
    x=x%12;
    if(y>0)
        printf("%d cartens(containing 12 boxes)\n",y);
    s=s+y;
    y=x/6;
    x=x%6;
    if(y>0)
        printf("%d cartens(containing 6 boxes)\n",y);
    s=s+y;
    if(x>0)
    {
        printf("Remaining boxes - %d\n",x);
        s=s+1;
    }
    printf("Number of cartens -%d",s);
    return 0;
}
