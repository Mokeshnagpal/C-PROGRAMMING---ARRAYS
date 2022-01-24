#include <string.h>
#include <stdio.h>
struct st
{
    int m;
    char n[30];
}s[40];
int main()
{
    int t=0;
    char o[30];
    for(int i=0;i<39;i++)
    {
        printf("Input name of student %d\n",i+1);
        fflush(stdin);
        scanf("%[^\n]",s[i].n);
        fflush(stdin);
        printf("Input %s's marks -\n",s[i].n);
        scanf("%ld",&s[i].m);
    }
    for(int i=0;i<39;i++)
    {
        for(int j=0;j<39-i;j++)
        {
            if(s[i].m<s[i+1].m)
            {
                t=s[i].m;
                s[i].m=s[i+1].m;
                s[i+1].m=t;
                strcpy(o,s[i].n);
                strcpy(s[i].n,s[i+1].n);
                strcpy(s[i+1].n,o);
            }
        }
    }
    printf("\nName\tMarks\n");
    for(int i=0;i<39;i++)
    {
        printf("%s\t%d\n",s[i].n,s[i].m);
    }
    return 0;
}





