#include <string.h>
#include <stdio.h>
int main()
{
    char x[25],c=0;
    printf("Input a name -\n");
    gets(x);
    c=strlen(x);
    char a[c],b[c];
    for(int i=0;i<c;i++)
    a[i]=x[i];
    printf("Input another name of %d length -\n",c);
    gets(b);
    for(int i=0;i<c;i++)
    {
        if(((int)a[i])>((int)b[i]))
        {
            for(int j=0;j<=i;j++)
            {
                printf("%c",a[i]);
            }
        }
        else
            for(int j=0;j<=i;j++)
            {
                printf("%c",b[i]);
            }
        printf("\n");
    }
    return 0;
}



