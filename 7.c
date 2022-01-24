#include <stdio.h>
int main()
{
    char a[11][25];
    int b[11];
    for(int i=0;i<11;i++)
    {
        fflush(stdin);
        printf("Input name of cricketer %d=\n",i+1);
        scanf("%[^\n]",&a[i]);
        printf("Input score of cricketer %d=\n",i+1);
        scanf("%d",&b[i]);
    }

    printf("Cricketer name\tScore\n\n");
    for(int i=0;i<11;i++)
    {
        printf("%s\t%d\n",a[i],b[i]);
    }
    return 0;
}
