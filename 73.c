#include <stdio.h>
int main()
{
    int a[4],x=0;
    char c[3];
    printf("Input 4 numbers continuously -\n");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    printf("Input 3 arithemic operator continuously (\,+,-,*)-\n");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        scanf("%c",&c[i]);
        if(c[i]=='+')
            x=x+a[i+1];
        else if(c[i]=='-')
            x=x-a[i+1];
        else if(c[i]=='/')
            x=x/a[i+1];
        else if(c[i]=='*')
            x=x*a[i+1];
    }

        printf("\nResult after the operation - %d",x);
        return 0;
}

