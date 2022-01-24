#include <stdio.h>
int main()
{
    int p[25],c[25],m[25],t[25];
    char n[25][20];
    double a[25];
    for(int i=0;i<25;i++)
    {
        printf("Input name -\n");
        fflush(stdin);
        scanf("%[^\n]",n[i]);
        printf("Input marks in maths -\n");
        scanf("%d",&m[i]);
        printf("Input marks in physics -\n");
        scanf("%d",&p[i]);
        printf("Input marks in chemistry -\n");
        scanf("%d",&c[i]);
        t[i]=p[i]+c[i]+m[i];
        a[i]=t[i]/3;
    }
    printf("\nNAME\tMATHS\tPHYSICS\tCHEMISTRY\tTOTAL\tAVERAGE\n");
    for(int i=0;i<25;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%0.2lf\n",n[i],m[i],p[i],c[i],t[i],a[i]);
    }
}
