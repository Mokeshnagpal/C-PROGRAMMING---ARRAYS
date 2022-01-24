#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m=0,x=0,y=0;
    printf("Input number of participants -\n");
    scanf("%d",&m);
    if(m<3||m>10)
    {
        printf("INPUT VALUE IS OUT OF RANGE");
        exit(0);
    }
    char a[m][5];
    char b[5];
    int c[m];
    printf("Respected teacher please enter the answer key -\n");
    for(int i=0;i<5;i++)
    {
        c[i]=0;
        fflush(stdin);
        scanf("%c",&b[i]);
        if((int)b[i]<97||(int)b[i]>100)
        {
            printf("\nWrong input !!!");
            exit(0);
        }
    }
    for(int i=0;i<m;i++)
    {
        system("cls");
        printf("Participant %d please enter your answers from the given option(A/B/C/D) and leave for the next student to answer -\n",i+1);
        for(int j=0;j<5;j++)
        {
            fflush(stdin);
            scanf("%c",&a[i][j]);
        if(a[i][j]==b[j])
                c[i]++;
        }
        if(c[i]>x)
        {
            x=c[i];
            y=i;
        }
    }
    system("cls");
    for(int i=0;i<m;i++)
    {
        if(i==y)
            printf("Participant %d scored %d marks(HIGHEST)\n",i+1,c[i]);
        else
            printf("Participant %d scored %d marks\n",i+1,c[i]);
    }
    return 0;
}
