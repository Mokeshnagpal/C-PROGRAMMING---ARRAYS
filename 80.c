#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char x[15];
    char a[10][15]={"GERMANY","NEPAL","JAPAN","CANADA","IRAQ","SRI-LANKA","BRAZIL","AUSTRALIA","INDIA","SOUTH AFRICA"};
    char b[10][15]={"BERLIN","KATMANDU","TOKYO","MONTREAL","BAGHDAD","COLOMBO","BRAZIALIA","PERTH","DELHI","PRETORIA"};
    for(int i=0;i<9;i++)
    printf("%s\n",a[i]);
    printf("\nInput name of a country from above-\n");
    fflush(stdin);
    scanf("%[^\n]",x);
    fflush(stdin);
    for(int i=0;i<9;i++)
    {
        if(strcmp(a[i],strupr(x))==0)
            printf("\nCAPITAL - %s",b[i]);
    }
    return 0;
}

